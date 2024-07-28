#include <stdio.h>

int getSize(char str[]) {

    int count = 0;
    
    while (str[count] != '\0')
    {
        count++;
    }

    return count;
    
}

void splitString(char str[], int k) {

    int size = getSize(str);

    //printf("size = %d",size);

    for (int i = 0; i < size; ) {
        printf("%c",str[i]);
        i += k;
    }
    printf("\n");
    for (int i = 1; i < size;) {
        printf("%c",str[i]);
        i += k;
    }


}
int main() {

    char str[100];
    printf("enter string 1\n");
    scanf("%s",str);

    int k;
    printf("enter string2\n");
    scanf("%d",&k);

    splitString(str, k);


}