#include <stdio.h>
/* 
void findDiagonalOrder(int row, int col, int mat[row][col]) {
    //spattern
    int res[row * col];
    int idx = 0;  
    int i = 0, j = 0;
    int up = 1; 

    while (idx < row * col) {
        res[idx++] = mat[i][j]; 

        if (up) {
            if (i > 0 && j < col - 1) {
                i--; 
                j++; 
            } else {
                if (j == col - 1) {
                    i++; 
                } else {
                    j++; 
                }
                up = 0; 
            }
        }

        else {
            if (j > 0 && i < row - 1) {
                j--; 
                i++; 
            } else {
                if (i == row - 1) {
                    j++; 
                } else {
                    i++; 
                }
                up = 1; 
            }
        }
    }

    printf("Result:\n");
    for (int k = 0; k < idx; k++) {
        printf("%d ", res[k]);
    }
    printf("\n");
} */

void findDiagonalOrder(int row,int col,int arr[row][col]) {
 
    for(int i = 0; i < row + col - 2; i++) {

        int start = (i < row - 1) ? i : row - 1;

        int end = (i < row - 1) ? 0 : i % (row - 1);

        while(start >= 0 && end < col ) {

            printf("%d ",arr[start][end]);
            start--;
            end++;

        }
    }

}

int main() {

    int row;
    int col;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &col);

    int arr[row][col];

    printf("Enter array elements:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    findDiagonalOrder(row,col,arr);


}
