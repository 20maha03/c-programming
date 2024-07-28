#include <stdio.h>

int findMaxSubArraySum(int arr[], int size);

int main() {
    int size;
    int userSum;

    printf("enter size\n");
    scanf("%d",&size);

    int arr[size];

    printf("enter array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]); 
    }

    int result = findMaxSubArraySum(arr, size);

    printf("result = %d", result);

}


int findMaxSubArraySum(int arr[], int size) {
    
    int dummySum = arr[0];
    int originalSum = arr[0];

    for (int i = 1; i < size; i++) {
        dummySum += arr[i];
        if (originalSum < dummySum) {
            originalSum = dummySum;
        }
        if(dummySum < 0) {
            dummySum = 0;
        }
    }

    return originalSum;
}