#include <stdio.h>

int findTheBuyPrice(int arr[], int size);
int findMax(int num1, int num2);
int findMin(int num1, int num2);

int main() {
    int size;

    printf("enter size\n");
    scanf("%d",&size);

    int arr[size];

    printf("enter array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]); 
    }

    int result = findTheBuyPrice(arr, size);
    printf("result = %d",result);
}

int findTheBuyPrice(int arr[], int size) {
    int maxPrice = 0;
    int minPrice = 2147483647;

    for (int i = 0; i < size; i++) {
        minPrice = findMin(arr[i], minPrice);
        maxPrice = findMax(maxPrice, arr[i] - minPrice);
    }

    return maxPrice;
}
int findMin(int num1, int num2) {
    if (num1 <= num2) {
        return num1;
    } 
    else {
        return num2;
    }
}

int findMax(int num1, int num2) {
    if (num1 >= num2) {
        return num1;
    } 
    else {
        return num2;
    }
}
