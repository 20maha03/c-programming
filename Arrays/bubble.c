#include <stdio.h>
void bubbleSort(int arr[], int szie);
int main() {
    int size;
    printf("enter size");
    scanf("%d",&size);
    printf("enter array elements");
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]);
    }
    printf("after sorting\n");
    bubbleSort(arr,size);
    for (int i = 0; i < size; i++) {
        printf("%d\n",arr[i]);
    }
}
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int val = 0;
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                val = 1;
            }
        }
        if (val == 0) {
            break;
        }
    }
}