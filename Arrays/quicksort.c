#include <stdio.h>

void quickSort(int arr[], int start, int end);
int partion(int arr[], int start, int end);

int main() {

    int size;

    printf("enter array size\n");
    scanf("%d",&size);

    printf("enter array elements\n");

    int arr[size];

    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]);
    }
    
    quickSort(arr,0,size - 1);
    
    printf("after sorting..\n");

    for (int i = 0; i < size; i++) {
        printf("%d\n",arr[i]);
    }

}

void quickSort(int arr[], int start, int end) {
    if (start < end) {
        int pIndex = partion(arr, start, end);
        quickSort(arr, start, pIndex - 1);
        quickSort(arr, pIndex + 1, end);
    }
}

int partion(int arr[], int start, int end) {
    int pivot = arr[end];
    int pIndex = start;
    for (int i = start; i < end; i++) {
        if (arr[i] <= pivot) {
            int temp = arr[pIndex];
            arr[pIndex] = arr[i];
            arr[i] = temp;
            pIndex++;
        }
    }
    int temp = arr[pIndex];
    arr[pIndex] = arr[end];
    arr[end] = temp;
    return pIndex;
}