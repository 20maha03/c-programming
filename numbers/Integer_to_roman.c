#include <stdio.h>

int main() {
    char roman[] = {'M','D','C','L','X','V','I'};
    int values[] = {1000, 500, 100, 50, 10, 5, 1};

    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    if (number <= 0 || number >= 4000) {
        printf("Number out of range for Roman numerals.\n");
        return 1;
    }

    int i = 0;
    while (number > 0) {
        int div = number / values[i];
        number %= values[i];

        while (div--) {
            printf("%c", roman[i]);
        }
        i++;
    }
    
    printf("\n");

    return 0;
}
