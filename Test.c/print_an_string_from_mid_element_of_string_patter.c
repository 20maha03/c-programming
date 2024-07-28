#include <stdio.h>

int strSize(char *str) {
    int count = 0;
    while(*str != '\0') {
        count++;
        str++;
    }
    return count;
}

int main() {

    char s[100], a[100];
    scanf("%s", s);
    int len = strSize(s);
    /* int mid = len / 2;

    
    int k = 0;
    for (int i = mid; i < len; i++) {
        a[k++] = s[i];
    }
    for (int i = 0; i < mid; i++) {
        a[k++] = s[i];
    }
    a[len] = '\0';  

    
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            if (j < len - i - 1) {
                printf(" ");
            } else {
                printf("%c", a[j - (len - i - 1)]);
            }
        }
        printf("\n");
    } */
    
    for (int i = 0; i < len; i++) {

        int mid = len / 2;
        
        for (int j = 0; j < len; j++) {
            if (j < len - i - 1) {
                printf(" ");
            } else {
                printf("%c", s[mid++]);
               
            }
            if(s[mid] == '\0') {
                mid = len - mid;
            }
        }
        printf("\n");
        

    }
    return 0;
}