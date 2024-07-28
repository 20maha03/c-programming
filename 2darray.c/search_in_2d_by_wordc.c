#include <stdio.h>

int getSize(char *str) {
    int count = 0;
    while (*str != '\0') {
        str++;
        count++;
    }
    return count;
}

int searchWord(int row, int col, char arr[row][col], int iIndex, int jIndex, char word[], int wordPosition) {
    
    if (wordPosition == getSize(word)) {
        return 1;
    }

     if (iIndex < 0 || iIndex >= row || jIndex < 0 || jIndex >= col || arr[iIndex][jIndex] != word[wordPosition]) {
        return 0;
    }

    char temp = arr[iIndex][jIndex];
    arr[iIndex][jIndex] = '*'; 

    if (searchWord(row, col, arr, iIndex, jIndex + 1, word, wordPosition + 1) ||  
        searchWord(row, col, arr, iIndex, jIndex - 1, word, wordPosition + 1) ||   
        searchWord(row, col, arr, iIndex + 1, jIndex, word, wordPosition + 1) ||  
        searchWord(row, col, arr, iIndex - 1, jIndex, word, wordPosition + 1) ||   
        searchWord(row, col, arr, iIndex + 1, jIndex + 1, word, wordPosition + 1) || 
        searchWord(row, col, arr, iIndex - 1, jIndex - 1, word, wordPosition + 1) || 
        searchWord(row, col, arr, iIndex + 1, jIndex - 1, word, wordPosition + 1) || 
        searchWord(row, col, arr, iIndex - 1, jIndex + 1, word, wordPosition + 1)) { 
        arr[iIndex][jIndex] = temp; 
        return 1;
    }

    arr[iIndex][jIndex] = temp;
    return 0;
}

void searchByWord(int row, int col, char arr[row][col], char str[]) {
    int found = 0;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] == str[0]) {
                if (searchWord(row, col, arr, i, j, str, 0)) {
                    printf("Pattern found at %d, %d\n", i, j);
                    found = 1;
                }
            }
        }
    }

    if (!found) {
        printf("Pattern not found in the grid.\n");
    }
}

int main() {
    int row, col;

    printf("Enter row size: ");
    scanf("%d", &row);

    printf("Enter col size: ");
    scanf("%d", &col);

    char arr[row][col];

    printf("Enter array elements:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf(" %c", &arr[i][j]);
        }
    }

    printf("Array:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }

    char str[100];
    printf("Enter search string: ");
    scanf("%s", str);

    searchByWord(row, col, arr, str);

    return 0;
}
