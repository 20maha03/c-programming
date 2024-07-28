#include <stdio.h>

void mergerSort(int arr[][100], int row, int col);
void mergerRec(int arr[][100], int left[][100], int right[][100], int leftRows, int leftCols, int rightRows, int rightCols);

int main() {
    int row, col;

    printf("enter row size\n");
    scanf("%d", &row);

    printf("enter column size\n");
    scanf("%d", &col);

    printf("enter array elements\n");

    int arr[row][100];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("your array elements...\n");

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    mergerSort(arr, row, col);

    printf("after sorting..\n");

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
} 

void mergerSort(int arr[][100], int row, int col) {

    if (row <= 1 && col <= 1) return; 

    int rowMid = row / 2;
    int colMid = col / 2;

    int left[rowMid][100], right[row - rowMid][100];

    for (int i = 0; i < rowMid; i++) {
        for (int j = 0; j < col; j++) {
            left[i][j] = arr[i][j];
        }
    }

    for (int i = rowMid; i < row; i++) {
        for (int j = 0; j < col; j++) {
            right[i - rowMid][j] = arr[i][j];
        }
    }

    mergerSort(left, rowMid, col);
    mergerSort(right, row - rowMid, col);
    mergerRec(arr, left, right, rowMid, col, row - rowMid, col);
}

void mergerRec(int arr[][100], int left[][100], int right[][100], int leftRows, int leftCols, int rightRows, int rightCols) {
    int i = 0, j = 0, k = 0, l = 0;

    while (i < leftRows && k < rightRows) {
        if (left[i][j] < right[k][l]) {
            arr[i + k][j + l] = left[i][j];
            j++;
            if (j == leftCols) {
                j = 0;
                i++;
            }
        } else {
            arr[i + k][j + l] = right[k][l];
            l++;
            if (l == rightCols) {
                l = 0;
                k++;
            }
        }
    }

    while (i < leftRows) {
        arr[i + k][j + l] = left[i][j];
        j++;
        if (j == leftCols) {
            j = 0;
            i++;
        }
    }

    while (k < rightRows) {
        arr[i + k][j + l] = right[k][l];
        l++;
        if (l == rightCols) {
            l = 0;
            k++;
        }
    }
}
