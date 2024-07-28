#include <stdio.h>

int getSize(char *str) {
    int count = 0;
    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}

void findCharacter(char key, int value, char arr[]) {
    int c = key - '0';  
    printf("%c ", arr[c] + value - 1); 
}

void findPattern(char str[], char arr[]) {
    int size = getSize(str);
    int i = 0;

    while (i < size) {
        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (str[i] == str[j]) {
                count++;
            } else {
                break;
            }
        }
        
        findCharacter(str[i], count, arr);

        i += count;
    }
}

int main() {
    char arr[10] = {'0', '0', 'A', 'D', 'G', 'J', 'M', 'P', 'T', 'W'};
    char str[100];

    printf("Enter the numeric pattern (e.g., 122333): ");
    scanf("%s", str);

    findPattern(str, arr);

    return 0;
}
