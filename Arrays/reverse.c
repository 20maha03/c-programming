#include <stdio.h>

void reverse(char arr[], int size);

int main() {
    int size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter array elements: ");
    char arr[size + 1];  

    scanf(" %s", arr);  
    
    printf("After reversing:\n");
    reverse(arr, size);

    for (int i = 0; i < size; i++) {
        printf("%c\n", arr[i]);
    }

    return 0;
}

void reverse(char arr[], int size) {
    int low = 0;
    int high = size - 1;

    while (low < high) {
        char temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}
