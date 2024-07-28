#include <stdio.h>

int findMax(int arr[], int size);

int main() {
    int size;

    printf("enter size :\n");
    scanf("%d",&size);

    int arr[size];

    printf("enter array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]); 
    }

    int result = findMax(arr, size);
    printf("result = %d",result);

    return 0;
}

int findMax(int arr[], int size) {
    int m1 = -1;
    int m2 = -1;
    int m3 = -1;
    int m4 = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] > m1) {
            m4 = m3;
            m3 = m2;
            m2 = m1;
            m1 = arr[i];
        }
        else if (arr[i] > m2 && arr[i] < m1) {
            m4 = m3;
            m3 = m2;
            m2 = arr[i];
        }
        else if (arr[i] < m2 && arr[i] > m3){
            m4 = m3;
            m3 = arr[i];
        }
        else if (arr[i] < m3 && arr[i] > m4) {
            m4 = m1;
        }
    }
    return m4;  
}
