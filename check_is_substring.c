#include <stdio.h>

int getSize(char *str) {

    int count = 0;
    while (*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}

void checkIsSubstring(char *str, char *search) {

    int lenStr = getSize(str);
    int lenSearch = getSize(search);
    int i, j;

    for (i = 0; i <= lenStr - lenSearch; i++) {
        
        for (j = 0; j < lenSearch; j++) {
            if (str[i + j] != search[j]) {
                break;
            }
        }
        if (j == lenSearch) {
            printf("'%s' is a substring of '%s' at %d \n", search, str,i);
            return;
        }
    }
    printf("'%s' is not a substring of '%s'\n", search, str);
}

int main() {

    char str[100];
    printf("enter string\n");
    scanf("%s",str);

    getchar();

    char searchString[100];
    printf("enter string\n");
    scanf("%s",searchString);

    checkIsSubstring(str,searchString);

}


