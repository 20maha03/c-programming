#include <stdio.h>

void mutiplyTwoString(char * str1, char * str2) {
    
    int size1 = getsizeOfTheString(str1);
    int size2 = getsizeOfTheString(str2);
    int totalSize = size1 + size2;
    int sum = 0;
    int product[100] = {0};
    
    for (int i = size1 - 1; i >= 0; i--) {
       for (int j = size2 - 1; j >= 0; j--) {
            int digit1 = str1[i] - '0';
            int digit2 = str2[j] - '0';
            printf("digit1 = %d\n",digit1);
            printf("digit2 = %d\n",digit2);
        
            sum = digit1 * digit2 + product[i + j + 1];
            printf("sum = %d\n",sum);
            product[i + j + 1] = sum % 10;
            product[i + j] += sum / 10;
       }
    }

    for (int i = 0; i < totalSize; i++) {
        printf("%d\n",product[i]);
    }
}


int getsizeOfTheString(char *str) {
    int count = 0;
    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}

int main() {

    char str1[100];
    char str2[100];

    printf("enter string\n");
    scanf(" %99[^\n]",str1);

    printf("enter string\n");
    scanf(" %99[^\n]",str2);

    mutiplyTwoString(str1,str2);

}
