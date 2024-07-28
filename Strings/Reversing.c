#include <stdio.h>
#include <string.h>

void reverseTheString(char str[], int start, int end);

void reverseTheEachWord(char str[], int length);

int main() {
    char str[100];

    printf("Enter string: ");
    scanf("%99[^\n]", str);

    printf("Original string: %s\n", str);

    int length = strlen(str);
    reverseTheString(str, 0, length - 1);

    printf("Reversed string: %s\n", str);

    reverseTheEachWord(str, length);
    printf("After reversing each word: %s\n", str);

    return 0;
}

void reverseTheString(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void reverseTheEachWord(char str[], int length) {
    int start = 0;
    int end = 0;

    while (end < length) {

        while (end < length && str[end] != ' ') {
            end++;
        }

        reverseTheString(str, start, end - 1);
        
        start = end + 1;
        end++;
    }
}
