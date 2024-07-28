#include <stdio.h>

int minjumps(int arr[], int size);


int main() {
    int size;
    int userSum;

    printf("enter size\n");
    scanf("%d",&size);

    int arr[size];

    printf("enter array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]); 
    }

    int result = minjumps(arr, 0, size - 1);

    printf("result = %d",result);
}

int minjumps(int arr[], int l, int h) {
     
    if (h == l)
        return 0;

    if (arr[l] == 0)
        return 214748

    int min = Integer.MAX_VALUE;
    for (int i = l + 1; i <= h && i <= l + arr[l]; i++) {
        int jumps = minJumps(arr, i, h);
        if (jumps != Integer.MAX_VALUE && jumps + 1 < min) {
            min = jumps + 1;
        }
        return min;
    }


}