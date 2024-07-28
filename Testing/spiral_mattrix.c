
#include <stdio.h>

void spiralMatrix(int row, int col, int arr[row][col]) {
     
    int top = 0;
    int bottom = row - 1;

    int left = 0, right = col - 1;
    int flag = 0;
    
    while (top <= bottom && left <= right) {
        if (flag == 0) {

            for (int i = left; i <= right; i++) {
                printf("%d ", arr[top][i]);
            }
            top++;
        } 
        else if (flag == 1) {
            
            for (int i = top; i <= bottom; i++) {
                printf("%d ", arr[i][right]);
            }
            right--;
        } 
        else if (flag == 2) {
        
            for (int i = right; i >= left; i--) {
                printf("%d ", arr[bottom][i]);
            }
            bottom--;
        } 
        else if (flag == 3) {
           
            for (int i = bottom; i >= top; i--) {
                printf("%d ", arr[i][left]);
            }
            left++;
        }
        
        flag = (flag + 1) % 4;
    }
}

void printArray(int row, int col, int arr[row][col]) {

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

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
    printArray(row,col,arr);

    spiralMatrix(row, col, arr);

   
}


