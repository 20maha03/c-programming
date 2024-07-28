#include <stdio.h>

void sum(int arr[], int size, int k) {
    

    for (int i = 0; i < size - 2; i++) {
         
        int left = i + 1;
        int right = size -1;

        while (left < size)  {
            int sum =arr[i] + arr[left] + arr[right];
            if(sum == k) {
                printf("%d, %d, %d\n",arr[i],arr[left],arr[right]);
                left++;
                right--;
            }

            else if(sum < k) {
                left++;
            }

            else {
                right--;
            }
        }
        
    }
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int val = 0;
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                val = 1;
            }
        }
        if (val == 0) {
            break;
        }
    }
}

int main() {

    int size;
    printf("enter arrsy size\n");
    scanf("%d",&size);

    int arr[size];
    printf("enetr array elemenst\n");
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]);
    }
    
    int k;
    printf("enetr k value\n");
    scanf("%d",&k);
    
    bubbleSort(arr,size);
    sum(arr,size,k);
}
