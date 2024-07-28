#include <stdio.h>

void markAsOne(int row, int col, int arr[row][col]) {

    for (int i = 0; i < row; i++) {

        for (int j = 0; j < col; j++) {
            
            if(arr[i][j] == 1) {
                
                int index = i - 1;
                while (index >= 0)
                {
                    if(arr[index][j] != -1) {
                        arr[index][j] = -1;
                    }   
                    index--;  
                }

                index = i + 1;
                while (index < row)
                {
                    if(arr[index][j] != -1) {
                        arr[index][j] = -1;
                    }   
                    index++;  
                }

                index = j - 1;
                while (index >= 0) {
                    if (arr[i][index] != 1) {
                        arr[i][index] = -1;
                    }
                    index--;
                }
                index = j + 1;
                while (index < col) {
                    if (arr[i][index] != 1) {
                        arr[i][index] = -1;
                    }
                    index++;
                }
                
            }
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if(arr[i][j] < 0) {
                arr[i][j] = 1;
            }
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

    printf("Before:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    markAsOne(row,col,arr);

    printf("After:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

}