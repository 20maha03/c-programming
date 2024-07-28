#include <stdio.h>

int findFruitsCount(int arr[],int size) {

    int prev = 1;
    int currentElement = arr[0];
    int prevElement = arr[0];
    int currentCount = 0;
    int count = 1;
    int max = 1;

    for (int i = 0; i < size - 1; i++) {
    
        if(currentElement == arr[i + 1] ) {
            count++;
        }
        else {
            prev = currentCount;
            currentCount = count;
            prevElement = arr[i];
            currentElement = arr[i + 1];
            if(prev + currentCount > max) {
                max = prev +  currentCount;
            }
            count = 1;
        }
        
    }
    return max;

}

int main() {

    int size;
    printf("enter size\n");
    scanf("%d",&size);

    int *arr = (int *)malloc(100 * sizeof(int));

    printf("enter array elemenst\n");
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]);
    }
    
    int result = findFruitsCount(arr, size);
    printf("result = %d",result);
}