#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the elements of the matrix:\n");
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("after\n");
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            
            for (int j = 0; j < n; j++) {
                printf("%d\t", matrix[i][j]);
            }
        } 
        else {
            
            for (int j = n - 1; j >= 0; j--) {
                printf("%d\t", matrix[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
