#include <stdio.h>

int getsizeOfTheString(char *str) {
    int count = 0;
    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}

void findTheOccurrence(char *str) {

    int hash[256] = {0};

    int len = getsizeOfTheString(str);

    for (int i = 0; i < len; i++) {
        hash[str[i]]++;
    }

    int index = 0;

    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (hash[str[j]] < hash[str[j + 1]]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
            else if (hash[str[j]] == hash[str[j + 1]] && str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() {
    char str[100];
    printf("Enter string: ");
    scanf(" %99[^\n]", str);

    findTheOccurrence(str);

    printf("Sorted characters based on occurrence: %s\n", str);

    return 0;
}
