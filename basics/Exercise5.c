#include <stdio.h>

void pattern1(int number);
void pattern2(int number);
void pattern3(int number);
void pattern4(int number);

int main() {
    int number;

    printf("enter number\n");
    scanf("%d",&number);

    pattern4(number);
}

void pattern1(int number) {
    for (int i = 1; i <= number; i++) {
        for(int j = 1; j <= number; j++) {
            printf("%d",j);
        }
        printf("\n");
    }
}

void pattern2(int number) {
    for (int i = 1; i <= number; i++) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void pattern3(int number) {
    for (int i = 1; i <= 2 * number - 1; i++) {
        int start = i;
        if (i > number) {
            start = (2 * number) - i;
        }
        for (int j = 1; j <= start; j++) {
            printf("*");
            
        }
        printf("\n");
    }
}

void pattern4(int number) {
    for (int i = 0; i < number; i++) {
        for (int j = 0; j < number - i - 1; j++) {
            printf(" ");
        }

        for (int j = 0; j < (2 * i) + 1; j++) {
            printf("*");
        }

        for (int k = 0; k < number - i - 1; k++) {
            printf(" ");
        } 
        printf("\n");
    }
} 