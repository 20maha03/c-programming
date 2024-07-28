#include <stdio.h>

int findLongestCommonPrefix(char *str1, char *str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i]) {
        i++;
    }
    return i;
}

void substring(char *arr, int from, int to, char *ans) {
    int j = 0;
    for (int i = from; i < to && arr[i] != '\0'; i++) {
        ans[j++] = arr[i];
    }
    ans[j] = '\0';
}

void longestCommonPrefix(char arr[][20], int size) {
    if (size <= 0) {
        printf("No strings to compare.\n");
        return;
    }
    
    char prefix[20];
    substring(arr[0], 0, 20, prefix); 
    
    for (int i = 1; i < size; i++) {
        int j = 0;
        while (prefix[j] != '\0' && arr[i][j] != '\0' && prefix[j] == arr[i][j]) {
            j++;
        }
        prefix[j] = '\0';
    }
    
    if (prefix[0] != '\0') {
        printf("Longest common prefix: %s\n", prefix);
    } else {
        printf("No common prefix found.\n");
    }
}

int main() {
    int size;

    printf("Enter number of strings: ");
    scanf("%d", &size);

    char arr[size][20];

    printf("Enter %d strings:\n", size);
    for (int i = 0; i < size; i++) {
       scanf("%19s", arr[i]);  
    }
    
    printf("Entered strings:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", arr[i]);
    }
    
    longestCommonPrefix(arr, size);

    return 0;
}
