#include <stdio.h>

#define MAX_SIZE 100


int findFirstnonrepeating(int arr[], int size);

int main() {
    int size;
   
    printf("enter size\n");
    scanf("%d",&size);

    int arr[MAX_SIZE];

    printf("enter array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]); 
    }

    int result = findFirstnonrepeating(arr, size);

    printf("result = %d", result);
}

int findFirstnonrepeating(int arr[], int size) {

    int map[MAX_SIZE] = {0};
    
    for(int i = 0; i < size; i++) {
        map[arr[i]]++;
    }

    for (int i = 0; i < 20; i++) {
        if(map[arr[i]] == 1) {
            return arr[i];
        }
    }
}
