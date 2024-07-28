#include <stdio.h>

void reverse(int arr[], int start, int end);

int main() {
    int size;

    printf("enetr size\n");
    scanf("%d",&size);
    
    printf("enter array elements\n");
    int arr[size];

    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]);
    }

    printf("enter k value");
    int k;
    scanf("%d",&k);
    k = k % size;
    reverse(arr,0, size - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, size - 1);
    printf("after rotating..");
    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }
}
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}