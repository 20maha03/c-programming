#include <stdio.h>

int leanearSearch(int arr[], int target);

int main() {
    int size;
    printf("enter size");
    scanf("%d",&size);
    printf("enter array elements");
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]);
    }
    printf("enter target");
    int target;
    scanf("%d",&target);
    int result = linearSearch(arr,target,size);
    printf("result = %d",result);
}
int linearSearch(int arr[],int  target, int size) {
    for (int i = 0; i < size; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
}