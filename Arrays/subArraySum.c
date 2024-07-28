#include <stdio.h>

int main() {
    int size;
    int userSum;

    printf("enter size\n");
    scanf("%d",&size);

    int arr[size];

    printf("enter array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]); 
    }
    
    printf("enter k value\n");
    scanf("%d",&userSum);

    int i = 0;
    int j = 0;

    findSubArray(arr, size, userSum, &i, &j);

    printf("subarray form %d to %d",i,j);

    printf("Sub Array\n");

    for (int k = i; k <= j; k++) {
        printf("%d  ",arr[k]);
    }

    return 0;
}

void findSubArray(int arr[], int size, int userSum, int *i, int *j) {
   
    *i = 0;
    *j = 0;

    int sum = 0;

    while (*j < size) {
          
        sum += arr[*j];

        while (sum > userSum  && *i < *j) {
            sum -= arr[*i];
            (*i)++;
        }
        
        if (sum == userSum) {
            break;
        }
        (*j)++;
    }
}
