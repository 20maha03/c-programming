#include <stdio.h>

int longestConcequtiveSubsequence(int arr[], int size);
void sort (int arr[], int size);

int main() {
    int size;

    printf("enter size\n");
    scanf("%d",&size);

    int arr[size];

    printf("enter array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]); 
    }
    
    sort(arr,size);

    printf("after sorting\n");
    for (int i = 0; i < size; i++) {
        printf("%d ",arr[i]); 
    }

    int result = longestConcequtiveSubsequence(arr, size);
    printf("result = %d",result);
}

int longestConcequtiveSubsequence(int arr[], int size) {
    
    int count;
    int dummyCount = 0;

    for (int i = 0; i < size; i++) {
        count = 1;
        while (i < size - 1 && arr[i + 1] == arr[i] + 1) {
            i++;
            count++;
        }

        if(count > dummyCount) {
            dummyCount = count;
        }
       
    }

    if (arr[size - 1] == arr[size - 2] + 1) {
        return ++dummyCount;
    }
    else {
        return dummyCount;
    }
    
}

void sort (int arr[], int size) {

    for (int i = 0; i < size; i++) {
        int value = 0;

        for (int j = 0; j < size - i - 1; j++) {

            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                value = 1;
            }
        }

        if(value == 0) {
            break;
        }
    }


}
