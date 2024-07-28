#include <stdio.h>

#define ROW 3
#define COL 3

void printSubMatrix(int mat[ROW][COL], int startRow, int endRow, int startCol, int endCol) {
    for (int i = startRow; i <= endRow; i++) {
        for (int j = startCol; j <= endCol; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printAllSubMatrices(int mat[ROW][COL]) {
    for (int startRow = 0; startRow < ROW; startRow++) {
        for (int startCol = 0; startCol < COL; startCol++) {
           for (int endRow = startRow; endRow < ROW; endRow++) {
                for (int endCol = startCol; endCol < COL; endCol++) {
                    printSubMatrix(mat, startRow, endRow, startCol, endCol);
                }
            }
        }
    }
}

int main() {
    int matrix[ROW][COL] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("All submatrices of the matrix:\n");
    printAllSubMatrices(matrix);

    return 0;
}
