#include <stdio.h>

void compressString(char *str) {
    
    int i = 1;
    int count = 1;
    int index = 0;
    while (str[i] != '\0') {

        i = 1;
        int window = i;

        while (str[i] == str[i - 1]) {
            count++;
            window++;
        }

        if(count > 1) {
            str[]
        }

        
    }

}
int main() {

    char str[100];

    printf("enter string\n");
    scanf("%d",str);

    compressString(str);
}