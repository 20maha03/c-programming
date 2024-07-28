#include <stdio.h>

int findMax(int number) {

    int max = 0;
    int dummy = 0;
    
    int temp = number;
    while (temp > 0) {
        int rem = temp % 10;
        dummy += rem;
        temp /= 10;
    }
    
    temp = number;
    max = 1; 
    while (temp > 0) {
        int rem = temp % 10;
        max *= rem;
        temp /= 10;
    }
    
    if (dummy > max) {
        return dummy;
    } else {
        return max;
    }
}

void storeTheMax(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = findMax(arr[i]);
    }
}

int main() {

    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    storeTheMax(arr, size);
    
    printf("Result:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
