#include <stdio.h>
#include <stdbool.h>

int getSize(char *arr) {
    int size = 0;
    while (arr[size] != '\0') {
        size++;
    }
    return size;
}

void printSubArray(char arr1[], char arr2[]) {
    int strSize = getSize(arr1);
    int subSize = getSize(arr2);

    
    int i = 0; 
    int j;    

    while (i <= strSize - subSize) {
        
        j = 0;
        while (j < subSize && arr1[i + j] == arr2[j]) {
            j++;
        }

        if (j == subSize) {
            for (j = i; j < i + subSize; j++) {
                printf("%c", arr1[j]);
            }
            printf("\n");

           
            i += subSize;
        } else {
            
            i++;
        }
    }
}

int main() {
    char str1[100];
    printf("Enter String 1: ");
    scanf("%[^\n]", str1);
    getchar();

    char str2[100];
    printf("Enter String 2: ");
    scanf("%[^\n]", str2);
    getchar();

    printf("Output:\n");
    printSubArray(str1, str2);

    return 0;
}
