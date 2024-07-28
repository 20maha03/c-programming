#include <stdio.h>

int getStrLen(char *str) {
    int count = 0;
    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}

int getInteger(char a) {
    return a - '0';
}

int getIntegerFromString(char *str) {

    int size = getStrLen(str);
    int result = 0;

    for (int i = 0; i < size; i++) {

        int digit = getInteger(str[i]);
        
        if(digit < 0 || digit > 9) {
            return 0;
        }

        result = result * 10 + digit;
    }

    return result;
}

int main() {
    char str[100];
    printf("Enter string: ");
    scanf(" %[^\n]", str);

    int result = getIntegerFromString(str);
    printf("Result = %d\n", result);

    return 0;
}
