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

void pattern(char s[]) {

    int len = getSize(s);

    if(len < 2) {
        printf("invalid input\n");
        return;
    }

    for (int i = 0; i < len; i++) {

        int mid = len / 2;

        for (int j = 0; j < len; j++) {
            if (j < len - i - 1) {
                printf("* ");
            } 
            else {
                printf("%c ", s[mid++]);
            }
            if(s[mid] == '\0') {
                mid = len - mid;
            }
        }
        printf("\n");
        
    }
}

int main() {

    char str[100];

    printf("enter string\n");
    scanf("%s",str);
    
    printf("\n");
    
    pattern(str);
    return 0;

}
#include <stdio.h>
#include <string.h>

int getsizeOfTheString(char *str);
void sortTheArray(char arr[][100], int size);
char * concat(char *str1, char *str2);


int main() {
    char str1[100] = "maha";
    char str2[100] = "lakshmi";
    char *ans = concat(str1, str2);
    printf("Concatenated result: %s\n", ans);

    int size;

    printf("Enter row size: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid size entered.\n");
        return 1;
    }

    char arr[size][100]; 
    printf("Enter %d strings:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%s", arr[i]); 
    }

    sortTheArray(arr, size);
    
    printf("Sorted array:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}

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

int getsizeOfTheString(char *str) {
    int count = 0;
    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}

int my_strcmp(const char *s1, const char *s2) {
    while (*s1 && *s2 && *s1 == *s2) {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

void my_strcpy(char *dest, const char *src) {
    while ((*dest++ = *src++));
}

void sortTheArray(char arr[][100], int size) {
    int i, j;
    char temp[100];

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (my_strcmp(arr[j], arr[j + 1]) > 0) {
                my_strcpy(temp, arr[j]);
                my_strcpy(arr[j], arr[j + 1]);
                my_strcpy(arr[j + 1], temp);
            }
        }
    }
}
