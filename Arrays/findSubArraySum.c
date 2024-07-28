#include <stdio.h>

int atMostK(int* nums, int numsSize, int k) {
    int counter[100001] = {0}; 
    int left = 0;
    int unique_count = 0;
    int good_subarrays = 0;
    
    for (int right = 0; right < numsSize; ++right) {
        if (counter[nums[right]] == 0) {
            unique_count++;
        }
        counter[nums[right]]++;
        
        while (unique_count > k) {
            counter[nums[left]]--;
            if (counter[nums[left]] == 0) {
                unique_count--;
            }
            left++;
        }
        
       good_subarrays += (right - left + 1);
    }
    
    return good_subarrays;
}

int countGoodSubarrays(int* nums, int numsSize, int k) {
    return atMostK(nums, numsSize, k) - atMostK(nums, numsSize, k - 1);
}

void printGoodSubarrays(int* nums, int numsSize, int k) {
    int counter[100001] = {0}; 
    int left = 0;
    int unique_count = 0;
    
    for (int right = 0; right < numsSize; ++right) {
        if (counter[nums[right]] == 0) {
            unique_count++;
        }
        counter[nums[right]]++;
        
        while (unique_count > k) {
            counter[nums[left]]--;
            if (counter[nums[left]] == 0) {
                unique_count--;
            }
            left++;
        }
        
        if (unique_count == k) {
             for (int i = left; i <= right; ++i) {
                printf("%d ", nums[i]);
            }
            printf("\n");
        }
    }
}

int main() {
    int nums[] = {1, 2, 1, 2, 3};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int k = 2;
    
    printf("Good subarrays with exactly %d distinct integers:\n", k);
    printGoodSubarrays(nums, numsSize, k);
    
    return 0;
}
