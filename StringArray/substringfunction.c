#include <stdio.h>

void substring(char *arr, int from, int to) {
    char ans[100];
    int j = 0; 
    for (int i = from; i < to && arr[i] != '\0'; i++) {
        ans[j++] = arr[i];
    }
    ans[j] = '\0'; 
    printf("result = %s\n", ans);
}

int main() {
    char str3[100];
    printf("Enter string: ");
    scanf(" %99[^\n]", str3);  

    int from, to;
    printf("Enter from index: ");
    scanf("%d", &from);
    printf("Enter to index: ");
    scanf("%d", &to);

    if (from < 0 || to < 0 || from > to) {
        printf("Invalid indices.\n");
        return 1;
    }

    substring(str3, from, to);

    return 0;
}
