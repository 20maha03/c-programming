#include <stdio.h>
int findFactor(int n) {
    int count = 0;
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            count++;
        }
    }
    return count; 
}

void sort(int arr[], int factor[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int swapped = 0; 
        for (int j = 0; j < size - i - 1; j++) {
            if (factor[j] < factor[j + 1]) {
               
                int tempFactor = factor[j];
                factor[j] = factor[j + 1];
                factor[j + 1] = tempFactor;
                
                
                int tempArr = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tempArr;
                
                swapped = 1;
            }
        }
        if (!swapped) {
            break; 
        }
    }

}

void sortByFactor(int arr[], int size) {
    int factor[size];
    
    for (int i = 0; i < size; i++) {
        factor[i] = findFactor(arr[i]);
    }
    
    sort(arr, factor, size);
}

int main() {
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    sortByFactor(arr, size);
    
    printf("Array after sorting by number of factors:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
