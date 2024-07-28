#include <stdio.h>

void findArrayLeader(int arr[], int size);

int main() {
    int size;

    printf("enter size\n");
    scanf("%d",&size);

    int arr[size];

    printf("enter array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]); 
    }

    findArrayLeader(arr, size);
}

void findArrayLeader(int arr[], int size) {
    
    for (int i = 0; i < size; i++) {
        
        while (i < size - 1 && arr[i] > arr[i + 1]) {
            printf("result = %d ",arr[i]);
            i++;
        }
    }

    printf("%d",arr[size -1]);
}

