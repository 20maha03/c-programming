#include <stdio.h>

void prime(int firstNumber);
int isPrime(int firstNumber);

int main() {
    int firstNumber;

    printf("enter first number\n");
    scanf ("%d",&firstNumber);

    printf("result \n");
    prime(firstNumber);
}

void prime(int firstNumber) {

    int i = 2;
    while(i <= firstNumber) {
        if(isPrime(i)) {
            printf("%d\n",i);
        }
        i++;
    }
}

int isPrime(int firstNumber) {
    if (firstNumber <= 1) {
        return 0;
    }
    int i = 2;
    while (i * i <= firstNumber) {
        if (firstNumber % i == 0) {
            return 0;
        }
        i++;
    }
}

