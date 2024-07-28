#include <stdio.h>
#define ROW 10
#define COL 50

int countWords(char * str1) {
    int count = 0;
    while (*str1 != '\0') {
        if (*str1 == '.') {
            count++;
        }
        str1++;
    }
    return count + 1;
}
int checkValidIP(char *str, int size) {
    int index = 0;
    int result = 0;
    while (*str != '\0') {
        if(*str != '.') {
            result = result * 10 + (*str - '0');
        }
        else if(*str == '.' && result >= 0 && result <= 255) {
            result = 0;
        }
        else {
            return 0;
        }
        str++;

    }
    return 1;
    
}

int main() {

    char str[100];

    printf("Enter first string: ");
    scanf(" %[^\n]s", str);

    int size = countWords(str);
    printf("size = %d\n",size);

    if(size == 4) {
        int result = checkValidIP(str,size);
        if(result) {
            printf("valid IP");
        }
        else {
            printf("invalid IP");
        }
    }
    else {
        printf("invalid IP");
    }
    return 0;

}

