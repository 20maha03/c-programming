
#include <stdio.h>


void validSudoko(int row, int col, int arr[]) {
     
     
}

int main() {

    int row;
    printf("enter row size\n");
    scanf("%d",&row);

    int col;
    printf("enter col size\n");
    scanf("%d",&col);

    int arr[row][col];
    
    printf("enter array elements\n");

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    
    printf("array\n");
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ",&arr[i][j]);
        }

        printf("\n");
    }

    validSudoko(row,col,arr);
}
