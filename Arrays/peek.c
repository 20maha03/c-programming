#include <stdio.h>

int main() {
    int size;

    printf("enter size\n");
    scanf("%d",&size);

    printf("enter array elements\n");
    int arr[size];

    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]);
    }

    int result = findPeekElement(arr, size);

    printf("result = %d",result);
}

int findPeekElement(int arr[], int size) {
    
    for (int i = 1; i < size; i++) {
        if(arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            return arr[i];
        }
    }

    return -1;
}