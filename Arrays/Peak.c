#include <stdio.h>

int findPeak(int arr[], int size);
    
int main() {
    int size;

    printf("enter size :\n");
    scanf("%d",&size);

    int arr[size];

    printf("enter array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]); 
    }

    int result = findPeak(arr, size);
    printf("result = %d",result);

}

int findPeak(int arr[], int size) {
    int low = 0;
    int high = size - 1;
 
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
            return arr[mid];
        }
        else if(arr[mid] < arr[mid - 1]) {
            high = mid - 1;
        } 

        else {
            low = mid + 1;
        }
    }
}