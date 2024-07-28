#include <stdio.h>

void replaceTheArrayElements(int arr[], int size) {

    for (int i = 0; i < size; i++) {
        int max = arr[i + 1];
        for (int j = i + 2; j < size; j++) {
            if(max < arr[j]) {
                max = arr[j];
            }
        }
        arr[i] = max;
    }
    arr[size - 1] = -1;
}
int main() {

    int size;
    printf("enter array size\n");
    scanf("%d",&size);

    int arr[size];
    printf("enter array elements\n");
    for (int i = 0; i < size; i++) {
         scanf("%d",&arr[i]);
    }

    printf("before array\n");
    for (int i = 0; i < size; i++) {
        printf("%d ",arr[i]);
    }

    replaceTheArrayElements(arr,size);

    printf("after\n");
    for (int i = 0; i < size; i++) {
        printf("%d ",arr[i]);
    }

    
}