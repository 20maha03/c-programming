#include <stdio.h>

int hcf(int firstNumber, int secondNumber);

int main() {
    int firstNumber;
    int secondNumber;

    printf("enter first number\n");
    scanf ("%d",&firstNumber);

    printf("enter second number\n");
    scanf("%d",&secondNumber);

    int result = hcf(firstNumber, secondNumber);
    printf("result = %d", result);
}

int hcf(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}