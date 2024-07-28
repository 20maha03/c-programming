#include <stdio.h>

#define ROWS 4
#define COLS 4

void spiralPrint(int matrix[ROWS][COLS]) {
    
    int top = 0, bottom = ROWS - 1;
    int left = 0, right = COLS - 1;
    int direction = 0;
    
    while (top <= bottom && left <= right) {
        if (direction == 0) {
          
            for (int i = left; i <= right; i++) {
                printf("%d ", matrix[top][i]);
            }
            top++;
        } else if (direction == 1) {
            
            for (int i = top; i <= bottom; i++) {
                printf("%d ", matrix[i][right]);
            }
            right--;
        } else if (direction == 2) {
        
            for (int i = right; i >= left; i--) {
                printf("%d ", matrix[bottom][i]);
            }
            bottom--;
        } else if (direction == 3) {
           
            for (int i = bottom; i >= top; i--) {
                printf("%d ", matrix[i][left]);
            }
            left++;
        }
        
        direction = (direction + 1) % 4;
    }
}

int main() {
    int matrix[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    printf("Spiral Order: ");
    spiralPrint(matrix);
    
    return 0;
}
