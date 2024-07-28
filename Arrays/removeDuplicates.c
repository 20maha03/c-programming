#include <stdio.h>

int removeDuplicates(int arr[], int size);

void sorting(int arr[], int size);
void mergeRec(int arr[], int size, int left[], int sizeofLeft, int right[], int sizeOfRight);

int main () {
    int size;

    printf("enetr size\n");
    scanf("%d",&size);
    
    printf("enter array elements\n");
    int arr[size];

    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]);
    }

    int result = removeDuplicates(arr, size);
    printf("resu = %d",result);


}

int removeDuplicates(int arr[], int size) {

    sorting(arr, size);

    printf("sorting..");

    for (int i = 0; i < size; i++) {
        printf("%d\n",arr[i]);
    }

    int count = 0;
    int result [size];
    int index = 0;
    for (int i = 1; i < size; i++) {
      if (arr[i] == arr[i - 1]) {

            count++;
            result[index++] = arr[i];

            // Skip all subsequent duplicates
            while (i < size - 1 && arr[i] == arr[i + 1]) {
                i++;
            }
        }
    }
    printf("eresult..\n");
    for (int i = 0; i < size; i++) {
        printf("%d\n",result[i]);
    }

    return count;

}

void sorting (int arr[], int size) {
      
    if (size < 2) {
        return;
    }

    int mid = size / 2;

    int left[mid];
    int right[size - mid];

    for (int i = 0; i < mid; i++) {
        left[i] = arr[i];
    }

    for (int i = mid; i < size; i++) {
        right[i - mid] = arr[i];
    }
    
    sorting(left, mid);
    sorting(right, size - mid);
    mergeRec(arr, size, left, mid, right, size- mid);
}

void mergeRec(int arr[], int size, int left[], int sizeofLeft, int right[], int sizeOfRight) {
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < sizeofLeft && j < sizeOfRight) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        }
        else {
            arr[k++] = right[j++];
        }
    }

    while (i < sizeofLeft) {
        arr[k++] = left[i++];
    }

    while(j < sizeOfRight) {
        arr[k++] = right[j++];
    }
}

      

