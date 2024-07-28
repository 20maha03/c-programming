#include <stdio.h>

void rotate90Clockwise(int arr[][100], int row, int col);

int main() {
    int row;
    int col;

    printf("Enter row size:\n");
    scanf("%d", &row);

    printf("Enter col size:\n");
    scanf("%d", &col);
    
    int arr[100][100];

    printf("Enter array elements:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Before rotation:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    rotate90Clockwise(arr, row, col);

    printf("After 90 degree clockwise rotation:\n");
    for (int i = 0; i < col; i++) {  
        for (int j = 0; j < row; j++) {  
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void rotate90Clockwise(int arr[][100], int row, int col) {
    
    for (int i = 0; i < row; i++) {
        for (int j = i + 1; j < col; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col / 2; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[i][col - 1 - j];
            arr[i][col - 1 - j] = temp;
        }
    }
}
