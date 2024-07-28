#include <stdio.h>

void paintTheMatrix(int row, int col, int arr[row][col], int rowPosition, int colPosition, int color) {
   
    if (rowPosition < 0 || rowPosition >= row || colPosition < 0 || colPosition >= col) {
        printf("Invalid position (%d, %d) for painting.\n", rowPosition, colPosition);
        return; 
    }
    
    if (rowPosition - 1 >= 0) {
        arr[rowPosition - 1][colPosition] = color; 
    }
    if (rowPosition + 1 < row) {
        arr[rowPosition + 1][colPosition] = color; 
    }
    if (colPosition - 1 >= 0) {
        arr[rowPosition][colPosition - 1] = color; 
    }
    if (colPosition + 1 < col) {
        arr[rowPosition][colPosition + 1] = color; 
    }
    if (rowPosition - 1 >= 0 && colPosition - 1 >= 0) {
        arr[rowPosition - 1][colPosition - 1] = color; 
    }
    if (rowPosition - 1 >= 0 && colPosition + 1 < col) {
        arr[rowPosition - 1][colPosition + 1] = color; 
    }
    if (rowPosition + 1 < row && colPosition - 1 >= 0) {
        arr[rowPosition + 1][colPosition - 1] = color; 
    }
    if (rowPosition + 1 < row && colPosition + 1 < col) {
        arr[rowPosition + 1][colPosition + 1] = color; 
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
    
    int rowPosition;
    printf("enter row position\n");
    scanf("%d",&rowPosition);

    int colPosition;
    printf("enter col position\n");
    scanf("%d",&colPosition);
    
    int color;
    printf("print color\n");
    scanf("%d",&color);

    printf("Before:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    paintTheMatrix(row,col,arr,rowPosition,colPosition,color);

    printf("After:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


}