#include <stdio.h>

int missingElement(int arr[], int size);

int main() {
    int size;

    printf("enter the range\n");
    scanf("%d",&size);

    int arr[size];

    printf("enter array elements:\n");
    for (int i = 0; i < size-1; i++) {
        scanf("%d",&arr[i]); 
    }

    int result = missingElement(arr, size);
    
    printf("result = %d",result);

    return 0;
}

int missingElement(int arr[], int size) {
    
    int dummySum = 0;
    int originalSum = 0;

    for (int i = 1; i <=size; i++) {
        originalSum += i;
    }

    printf("original = %d",originalSum);
    
    for (int i = 0; i < size-1; i++) {
        dummySum += arr[i];
    }

    printf("dummy= %d",dummySum);

    return originalSum-dummySum;
}