#include <stdio.h>

int main() {


    int size;
    printf("enter size");
    scanf("%d",&size);
    
    char arr[size];
    printf("enter array elements\n");
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]);
    }

    for (int i = 0;  i < size; i++ ) {
        for (int j =i; j < size ; j++) {
            for (int k = i; k <= j; k++) {
               printf("%d ",arr[k]);
            }
           printf("\n");
        }
        //printf("\n");
    }
}
