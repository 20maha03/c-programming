#include <stdio.h>
#include <strings.h>

void reverse(char str[]);

int main() {
    char str[100];
    printf("enter string\n");
    scanf("%99[^\n]s",&str);

    printf("before\n%s",str);

    reverse(str);
    printf("after\n%s",str);
    return 0;
}

void reverse(char str[]) {
    
    int length = strlen(str);
    int low = 0;
    int high = length - 1;

    while(low < high) {
        int temp = str[low];
        str[low] = str[high];
        str[high] = temp;
        low++;
        high--;
    }
}