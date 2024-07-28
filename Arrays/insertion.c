#include <stdio.h>

void insertionSort(int arr[], int size);
int main() {

    int size;

    printf("enter array size");
    scanf("%d",&size);

    printf("enter array elements\n");
    int arr[size];

    for (int i = 0; i < size; i++) {
        scanf("%d\n", &arr[i]);
    }
    insertionSort(arr,size);
    printf("After sorting");
    for (int i = 0; i < size; i++) {
        scanf("%d\n",arr[i]);
    }

}
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int hole = i;
        int value = arr[i];
        while(hole > 0 && arr[hole - i] > arr[i]) {
            arr[hole] = arr[hole - i];
            hole = hole - 1;
        }
        arr[hole] = value;
    }
}