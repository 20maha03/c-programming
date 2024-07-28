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

void mystrcpy(char *dest, const char *src) {
    while ((*dest++ = *src++));
}

int IsPalindrom(char str[]) {

    int left = 0;
    int right = getSize(str) - 1;
    
    while (left < right)
    {
        if(str[left] == str[right]) {
            left++;
            right--;
        }   
        else {
            return 0;
        }
    }
    return 1;
    
}

void removeThePalindromicWord(char str[][100], int size) {
    int shift = 0;
    
    for (int i = 0; i < size; i++) {
        if (IsPalindrom(str[i])) {
            shift++;
        } else {
            mystrcpy(str[i - shift], str[i]);
        }
    }

    for (int i = 0; i < size - shift; i++) {
        printf("%s\n", str[i]);
    }
}

int main() {

    int size;
    printf("enter size\n");
    scanf("%d",&size);

    char str[size][100];

    printf("enter string array elements\n");

    for (int i = 0; i < size; i++) {
        scanf("%s",str[i]);
    }

    removeThePalindromicWord(str,size);
}