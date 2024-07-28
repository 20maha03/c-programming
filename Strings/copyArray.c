#include<stdio.h>

int getStrLen(char * str);
void my_strcpy(char *dest, const char *src);

int main() {

    char str1[50];
    char str2[50];
    
    printf("enter first string\n");
    scanf("%s",str1);

    my_strcpy(str2,str1);
    int result = getStrLen(str2);
    printf("size = %d",result);

    printf("str1 = %s \nst2 = %s",str1,str2);
}

char *strcpy(char *source, char *destination) {
    

    while (*source != '\0') {
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0';

    return destination;
}

int getStrLen(char * str) {

    int count = 0;

    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}

void my_strcpy(char *dest, const char *src) {
    
    while ((*dest++ = *src++));
     
}