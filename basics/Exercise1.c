#include <stdio.h>

int main() {
    int number;

    printf("enter first number\n");
    scanf ("%d",&number);

    printFibo(number);

}

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

void printFibo(int n) {
    printf("Fibonacci Series up to %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}






