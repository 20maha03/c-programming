#include <stdio.h>

void swap(char *x, char *y) {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *str, int l, int r) {
    if (l == r) {
        printf("%s\n", str);  
    } else {
        for (int i = l; i <= r; i++) {
            swap((str + l), (str + i));  
            printf("see1 = %s\n ",str);
            permute(str, l + 1, r);      
            swap((str + l), (str + i)); 
            printf("see2 = %s\n ",str); 
        }
    }
}

int stringLength(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {
    char str[] = "abc";  
    int n = stringLength(str);
    permute(str, 0, n - 1);
    return 0;
}
