#include <stdio.h>

void diagonalPrinting(int col, int row, int arr[][col]);
void swap(int *start, int *end);
void getArray(int row, int col,int arr[][col]);
void printArray(int row, int col,int finalArray[][col]);

int main() {

    int row;
    int col;

    printf("Enter number of columns: ");
    scanf("%d", &col);

    printf("Enter number of rows: ");
    scanf("%d", &row);

    int array[row][col];
    
    printf("enter first array elements\n");
    getArray(row,col,array);

    printf("first array\n");
    printArray(row, col,array);

    diagonalPrinting(row,col,array);
}

void diagonalPrinting(int row, int col, int arr[][col]) {
    printf("after result\n");
    for (int i = 0; i < row * 2 - 1; i++) {
        if(i < col) {
            for (int j = 0;  j <= i; j++) {
                printf("%d  ",arr[i - j][j]);
            }
            printf("\n");
        }
        else {
            for (int j = row - 1;  j > i - col; j--) {
                printf("%d  ",arr[j][i - j]);
            }
            printf("\n");
        }
    }
} 

void printArray(int row, int col, int finalArray[][col]) {

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d  ", finalArray[i][j]);
        }
        printf("\n");
    }
}

void getArray(int row, int col,int arr[][col]) {

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}
