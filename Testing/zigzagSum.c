
#include <stdio.h>

int zigZagSum(int row, int col, int arr[row][col]) {

    int sum = 0;

    for (int i = 0; i < row; i++)  {
        
        for (int j = 0; j < col; j++) {

            if(j == col - i || i == 0 || i == row - 1) {

                sum += arr[i][j];
            }
        }
    }

    return sum;

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
    
    printf("\narray\n");
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ",arr[i][j]);
        }

        printf("\n");
    }
    
    int result = zigZagSum(row,col,arr);

    printf("result = %d",result);
    return 0;

}