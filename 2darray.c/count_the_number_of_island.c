#include <stdio.h>

#define MAX_SIZE 100 

void markZero(int grid[MAX_SIZE][MAX_SIZE], int n, int m, int i, int j) {
    
    if (i < 0 || j < 0 || i >= n || j >= m || grid[i][j] == 0) {
        return;
    }
    grid[i][j] = 0;
    markZero(grid, n, m, i - 1, j);
    markZero(grid, n, m, i + 1, j);
    markZero(grid, n, m, i, j - 1);
    markZero(grid, n, m, i, j + 1);
}

int numIslands(int grid[MAX_SIZE][MAX_SIZE], int n, int m) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 1) {
                count++;
                markZero(grid, n, m, i, j);
            }
        }
    }
    return count;
}

int main() {

    int n, m;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);

   
    int grid[MAX_SIZE][MAX_SIZE];

   
    printf("Enter the grid elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
           scanf("%d", &grid[i][j]);
        }
    }

    
    int islandCount = numIslands(grid, n, m);
    printf("Number of islands: %d\n", islandCount);

    return 0;
}
