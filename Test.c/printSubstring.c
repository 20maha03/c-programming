#include <stdio.h>

int getStrLen(char * str) {

    int count = 0;

    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}

int main() {

    char arr[100];
    printf("enter string\n");
    scanf("%s",arr);
    
    int size = getStrLen(arr);
    
    char ans[100];
    printf("all ssubstring\n");

    for (int i = 0;  i < size; i++ ) {
        int index = 0;
        for (int j = i; j < size; j++){
            ans[index++] = arr[j]; 
            ans[index] = '\0';
            printf("%s\n",ans);
        }
        //printf("\n");
    }
}

