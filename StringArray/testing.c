#include<stdio.h>

char * concat(char *str1, char *str2) {

    char *start = str1;

    while (*start != '\0') {
        start++;
    }

    while (*str2 != '\0') {
        *start = *str2;
        start++;
        str2++;
    }

    *start = '\0';

    return str1;
     
}

int main()
{
     char str1[100] = "vishnu";
    char str2[100] = "dharshan";
    /* char* str1 =(char*)malloc(100);
    char* str2 =(char*)malloc(100); */

    char *res = concat(str1,str2);

    printf("%s", res);
}