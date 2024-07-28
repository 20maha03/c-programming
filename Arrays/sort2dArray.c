#include <stdio.h>


void printArray(int row, int col, int finalArray[][col]) {

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", finalArray[i][j]);
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

void swap(int *start, int *end) {
    int temp = *start;
    *start = *end;
    *end = temp;
}
void sortArray(int col, int row, int arr[][col]) {
    
    int totalElements = row * col;
    for (int i = 0; i < totalElements - 1; i++) {
        for (int j = i + 1; j < totalElements; j++) {
            if (arr[j % col][j / col] < arr[i % col][i / col]) {
                swap(&arr[j % col][j / col], &arr[i % col][i / col]);
            }
        }
    }
}



int main() {

    int row;
    int col;

    printf("Enter number of columns: ");
    scanf("%d", &col);

    printf("Enter number of rows: ");
    scanf("%d", &row);

    int firstArray[row][col];
    
    printf("enter first array elements\n");
    getArray(row,col,firstArray);

    printf("first array\n");
    printArray(row, col,firstArray);

    sortArray(row, col,firstArray);

    printf("after sorting array\n");
    printArray(row, col,firstArray);
}
