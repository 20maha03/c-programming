#include <stdio.h>

int fibo(int n);
void printFib(int number);

int main() {
    int number;

    printf("Enter the number of terms: ");
    scanf("%d", &number);
    
    printFib(number);

    return 0;
}

void printFib(int number) {
    printf("Fibonacci series: ");
    for (int i = 0; i < number; i++) {
        printf("%d ", fibo(i));
    }
    printf("\n");
}

int fibo(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibo(n - 1) + fibo(n - 2);
    }
}

