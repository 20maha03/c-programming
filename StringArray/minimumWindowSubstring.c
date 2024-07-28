#include <stdio.h>

int getsizeOfTheString(char *str) {
    int count = 0;
    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}

void printArray(char str[], int start, int end) {
    for (int i = start; i <= end; i++) {
        printf("%c", str[i]);
    }
}

void findMinimumWindowSubstring(char str[], char sub[]) {
    int s_len = getsizeOfTheString(str);
    int t_len = getsizeOfTheString(sub);

    if (t_len > s_len) {
        printf("");
        return;
    }

    int required = t_len;
    int min_len = s_len + 1;
    int start = 0, min_start = 0;

    int count[128] = {0};

    for (int i = 0; i < t_len; i++) {
        count[sub[i]]++;
    }

    int left = 0;
    for (int right = 0; right < s_len; right++) {
        if (count[str[right]] > 0) {
            required--;
        }
        count[str[right]]--;

        while (required == 0) {
            int current_len = right - left + 1;
            if (current_len < min_len) {
                min_len = current_len;
                min_start = left;
            }

            count[str[left]]++;
            if (count[str[left]] > 0) {
                required++;
            }
            left++;
        }
    }

    if (min_len > s_len) {
        printf("");
        return;
    }

    printArray(str, min_start, min_start + min_len - 1);
}

int main() {
    char str[100];
    printf("Enter string s: ");
    scanf("%99[^\n]", str);

    char sub[100];
    printf("Enter string t: ");
    scanf(" %s", sub);

    findMinimumWindowSubstring(str, sub);
    return 0;
}
