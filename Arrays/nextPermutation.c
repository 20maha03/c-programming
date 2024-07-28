#include <stdio.h>

void nextPermutation(int arr[], int size);
void reverse(int arr[], int size, int start , int end);

int main() {

    int size;
    printf("enter size\n");
    scanf("%d",&size);
    
    int arr[size];

    printf("enter array elements\n");
    for (int i = 0; i < size; i++) {
       scanf("%d",&arr[i]);
    }

    printf("befor result \n");
    for(int j = 0; j < size; j++) {
        printf("%d",arr[j]);
    }

    nextPermutation(arr, size);

    printf("result \n");
    for(int j = 0; j < size; j++) {
        printf("%d",arr[j]);
    }
}

void nextPermutation(int arr[], int size) {
    
    int index = -1;

    for (int i = size - 2; i >= 0; i--) {
        if(arr[i] < arr[i + 1]) {
            index = i;
            break;
        }
    }

    if(index == -1) {
        reverse(arr, size, 0, size);
    }

    for (int i = size - 1; i >= index; i--) {
        if(arr[i] > arr[index]) {
            int temp = arr[index];
            arr[index] = arr[i];
            arr[i] = temp;
            break; 
        }
    
    }

    reverse(arr,size,index + 1, size - 1 );
}

void reverse(int arr[], int size, int start , int end) {
      
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}