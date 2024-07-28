#include <stdio.h>

void reverseTheString(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int getsizeOfTheString(char *str) {
    int count = 0;
    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}

int main() {
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);
    
    int size = getsizeOfTheString(str);
    int left = 0;
    int right = size - 1;

    while (left < right) {
       
       while (left < right && !(str[left] >= '0' && str[left] <= '9') &&
                               !(str[left] >= 'A' && str[left] <= 'Z') &&
                               !(str[left] >= 'a' && str[left] <= 'z')) {
            left++;
        }
        
        while (left < right && !(str[right] >= '0' && str[right] <= '9') &&
                               !(str[right] >= 'A' && str[right] <= 'Z') &&
                               !(str[right] >= 'a' && str[right] <= 'z')) {
            right--;
        }
       
        if (left < right) {
            char temp = str[left];
            str[left] = str[right];
            str[right] = temp;
            left++;
            right--;
        }
    }

    printf("Reversed string (ignoring punctuation):\n%s\n", str);

    return 0;
}
