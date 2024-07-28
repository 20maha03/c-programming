#include <stdio.h>
#define ROW 10
#define COL 20

int countWords(char * str1) {
    int count = 0;
    while (*str1 != '\0') {
        if (*str1 == ' ') {
            count++;
        }
        str1++;
    }
    return count + 1;
}

int stringCompare(char * str1, char * str2) {
    while (*str1 && *str2 && *str1 == *str2) {
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

int countTheWordFromString(char arr[ROW][COL], char * word, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (stringCompare(arr[i], word) == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    char str1[100];
    char word[100];

    printf("Enter one word:\n");
    scanf(" %99[^\n]", word);

    printf("Enter a string:\n");
    scanf(" %99[^\n]", str1);

    char arr[ROW][COL] = {0};

    int size = countWords(str1);
    int j = 0;

    for (int i = 0; i < size; i++) {
        int col = 0;
        while (str1[j] != ' ' && str1[j] != '\0') {
            arr[i][col] = str1[j++];
            col++;
        }
        arr[i][col] = '\0';
        if (str1[j] != '\0') {
            j++;
        }
    }

    int result = countTheWordFromString(arr, word, size);
    printf("result = %d\n", result);

    return 0;
}
