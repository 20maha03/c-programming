#include <stdio.h>

int match(char *text, char *pattern) {
    
    if (*pattern == '\0') {
        return *text == '\0';
    }

     if (*pattern == '*') {
        return match(text, pattern + 1) || (*text != '\0' && match(text + 1, pattern));
    }

     if (*text != '\0' && (*text == *pattern || *pattern == '?')) {
        return match(text + 1, pattern + 1);
    }

    return 0;
}

int main() {
    char text[1000], pattern[1000];

    
    printf("Enter the text: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0'; 

    printf("Enter the pattern: ");
    fgets(pattern, sizeof(pattern), stdin);
    pattern[strcspn(pattern, "\n")] = '\0'; 

    
    if (match(text, pattern)) {
        printf("Pattern matches the text.\n");
    } else {
        printf("Pattern does not match the text.\n");
    }

    return 0;
}
