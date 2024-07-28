#include <stdio.h>
void swap(int *firstNumber, int *secondNumber);

int main() {
    int firstNumber;
    int secondNumber;

    printf("enter first number\n");
    scanf ("%d",&firstNumber);

    printf("enter second number\n");
    scanf("%d",&secondNumber);

    swap(&firstNumber, &secondNumber);
    printf("result = %d\n", firstNumber);

    printf("result = %d\n", secondNumber);
}

void swap(int *firstNumber, int *secondNumber) {
    int temp = *firstNumber;
    *firstNumber = *secondNumber;
    *secondNumber = temp;
}