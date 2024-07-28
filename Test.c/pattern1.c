#include <stdio.h>

int getsizeOfTheString(char *str) {
    int count = 0;
    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}


void p1(char str[]) {
     
    int size = getsizeOfTheString(str);

    for (int i = 0; i < size; i++) {
        // Calculate number of spaces dynamically
        int spaces = 2 * (size - i - 1);

        // Print spaces
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }

        // Print characters from the string
        for (int j = size - i - 1; j < size; j++) {
            printf("%c ", str[j]);
        }

        printf("\n");
    }

} 

int main() {

    char number[100];
    printf("enter number\n");
    scanf("%s",number);

    p1(number);
}