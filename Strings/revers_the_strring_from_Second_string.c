#include <stdio.h>

// Function to compare substrings
int my_strcmp(const char *s1, const char *s2, int len) {
    while (len-- && *s1 && *s2 && *s1 == *s2) {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

// Function to get the size of a string
int getsizeOfTheString(char *str) {
    int count = 0;
    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}

// Function to reverse a portion of a string
void reverseTheString(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

// Function to reverse each word in a specified range of the string
void reverseWordsInRange(char str[], int start, int end) {
    int word_start = start;
    for (int i = start; i <= end; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverseTheString(str, word_start, i - 1);
            word_start = i + 1;
        }
    }
}void reversePositionAfterSubstring(char *s1, char *s2) {
    int len1 = getsizeOfTheString(s1);
    int len2 = getsizeOfTheString(s2);
    int i, found = 0;

    printf("len1 = %d, len2 = %d\n", len1, len2);

    // Temporary buffer to store the substring to be compared
    char temp[100];

    for (i = 0; i <= len1 - len2; i++) {
        // Extract substring from s1 for comparison
        strncpy(temp, s1 + i, len2);
        temp[len2] = '\0';

        // Compare substring with s2
        if (strcmp(temp, s2) == 0) {
            found = 1;
            break;
        }
    }

    if (found) {
        int start = i + len2;

        // Reverse the portion of String1 after String2
        reverseTheString(s1, start, len1 - 1);

        // Reverse each word in the reversed portion
        reverseWordsInRange(s1, start, len1 - 1);
    }
}



int main() {
    char string1[] = "This is a test String only";
    char string2[] = "String";
    
    printf("Input String1: %s\n", string1);
    printf("Substring String2: %s\n", string2);
    
    reversePositionAfterSubstring(string1, string2);
    
    printf("Output String1 after reversing position of words: %s\n", string1);
    
    return 0;
}
