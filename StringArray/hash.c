#include <stdio.h>

/* int countTheWordS(char *str) {
    int count = 0;
    
    while (str != '\0') {
        if(str == ' ') {
            count++;
        }
        str++;
    }

    return count;
    
}
 */
void hash(char * str) {

    int arr[128] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        arr[str[i]]++;
    }

    for (int i = 0; i < 128; i++) {
        if (arr[i] > 0) {
           printf("%c - %d\n",i,arr[i]);
        }
    }
}

int main() {
    char str[100];

    printf("enter string\n");
    scanf(" %99[^\n]", str);

    //int size = countTheWordS(str);

    hash(str);
    /* int j = 0;
    for (int i = 0; i < size; i++) {
        int col = 0;
        while (str[j] != ' ' && str[j] != '\0')   {
            arr[i][col++] = str[j++];
        }
        arr[i][col] = '\0';
        if(str != '\0') {
              j++;
        }
    } */
    return 0;
}