#include <stdio.h>

void printArray(int row, int col, char arr[row][col]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%c  ", arr[i][j]); 
        }
        printf("\n");
    }
    printf("\n");
}

void spiralMatrix(int row, int col) {
    
    char result[row][col];
    
    int top = 0, bottom = row - 1;
    int left = 0, right = col - 1;
    int value = 0;  
    
    while (top <= bottom && left <= right) {
        
        for (int i = left; i <= right; i++) {
            result[top][i] = (value == 0) ? 'x' : 'o';
        }
        top++;
        
        
        for (int i = top; i <= bottom; i++) {
            result[i][right] = (value == 0) ? 'x' : 'o';
        }
        right--;
        
        if (top <= bottom) {
           
            for (int i = right; i >= left; i--) {
                result[bottom][i] = (value == 0) ? 'x' : 'o';
            }
            bottom--;
        }
        
        if (left <= right) {
            
            for (int i = bottom; i >= top; i--) {
                result[i][left] = (value == 0) ? 'x' : 'o';
            }
            left++;
        }
        
        value = 1 - value; 
    }
    
    printArray(row, col, result);
}

int main() {
    int row, col;
    
    printf("Enter row size: ");
    scanf("%d", &row);
    
    printf("Enter col size: ");
    scanf("%d", &col);
    
    spiralMatrix(row, col);
    
    return 0;
}
