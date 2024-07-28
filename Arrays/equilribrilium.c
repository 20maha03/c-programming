#include <stdio.h>

int findEquribriumPoint(int arr[], int size);

int main() {
    
    int size;
    

    printf("enter size\n");
    scanf("%d",&size);

    int arr[size];

    printf("enter array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]); 
    }

    int result = findEquribriumPoint(arr, size);

    printf("result = %d",result);
}

int findEquribriumPoint(int arr[], int size) {

    int pivot = 0;
    int left = 0;
    int right = 0;

    for (int i = 1; i < size; i++) {
        right += arr[i];   
    }

    while (pivot < size - 1 && left != right) {
        pivot++;
        right -= arr[pivot];
        left += arr[pivot - 1];
    }

    if(right == left) {
        return pivot;
    }
    else {
        return -1;
    }
}