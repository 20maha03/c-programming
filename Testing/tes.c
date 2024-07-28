#include <stdio.h>

int strSize(char *str) {

    int count = 0;
    while(*str != '\0') {
        count++;
        str++;
    }
    return count;
}

void removeDuplicates(char str[]) {

    int j = 0;
    int size = strSize(str);
    
    int index = 0;

    for(int i = 0; str[i] != '\0'; i++) {

        if(str[i] != str[i + 1]) {
            str[index++] = str[i];
        }
    }
    
    str[index] = '\0';
    printf("result = %s",str);

}

int main() {

    char str[100];
    printf("enter string\n");
    scanf("%s",str);

    removeDuplicates(str);

}