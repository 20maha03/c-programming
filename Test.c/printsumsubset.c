/* #include <stdio.h>

#define MAX_SIZE 100

void findSubsets(int arr[], int index, int size, int currentSum, int targetSum, int subset[], int subsetSize) {
    
    if (currentSum == targetSum) {
        printf("{ ");
        for (int i = 0; i < subsetSize; i++) {
            printf("%d ", subset[i]);
        }
        printf("}\n");
        return;
    }

    if (index >= size || currentSum > targetSum) {
        return;
    }

   
    subset[subsetSize] = arr[index];
    findSubsets(arr, index + 1, size, currentSum + arr[index], targetSum, subset, subsetSize + 1);


    findSubsets(arr, index + 1, size, currentSum, targetSum, subset, subsetSize);
}

void printSubsetsWithSum(int arr[], int size, int target_sum) {
    int subset[MAX_SIZE];
    findSubsets(arr, 0, size, 0, target_sum, subset, 0);
}

int main() {
    int arr[] = {10, 20, 30, 40, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target_sum = 50;

    printf("Subsets with sum %d:\n", target_sum);
    printSubsetsWithSum(arr, size, target_sum);

    return 0;
}
 */

#include <stdio.h>

#define MAX_SIZE 100

void printSubset(int arr[], int subset[], int subsetSize) {
    printf("{ ");
    for (int i = 0; i < subsetSize; i++) {
        printf("%d ", subset[i]);
    }
    printf("}\n");
}

void generateSubsets(int arr[], int size, int target_sum) {
    int subset[MAX_SIZE]; 
    int subsetSize; 
    int totalSubsets = 1 << size; // Total number of subsets, 2^size

    
    for (int i = 0; i < totalSubsets; i++) {
        subsetSize = 0;
        int current_sum = 0;

       
        for (int j = 0; j < size; j++) {
            if (i & (1 << j)) {
                subset[subsetSize++] = arr[j];
                current_sum += arr[j];
            }
        }

        if (current_sum == target_sum) {
            printSubset(arr, subset, subsetSize);
        }
    }
}

int main() {
    int arr[] = {2, 3, 5, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target_sum = 10;

    printf("Subsets with sum %d:\n", target_sum);
    generateSubsets(arr, size, target_sum);

    return 0;
}
