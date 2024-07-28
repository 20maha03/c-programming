#include <stdio.h>

int main() {
    int firstNumber;
    int secondNumber;

    printf("enter first number\n");
    scanf ("%d",&firstNumber);

    printf("enter second number\n");
    scanf("%d",&secondNumber);

    int result = lcm(firstNumber, secondNumber);
    printf("result = %d", result);
}

int main() {
    int size;
    int userSum;

    printf("enter size\n");
    scanf("%d",&size);

    int arr[size];

    printf("enter array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]); 
    }
