#include <stdio.h>
int lcm(int firstNumber, int secondNumber);
int gcd(int firstNumber, int secondNumber);

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

int lcm(int a, int b) {
    int max;
    if (a > b) {
        max = a;
    }
    else {
        max = b;
    }
    while (1) {
        if (max % a == 0 && max % b == 0) {
            return max;
        }
        max++;
    }
}





