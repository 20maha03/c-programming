#include <stdio.h>

int fibonacci(int n);
void printFibo(int n);

int main() {
    int number;

    printf("enter first number\n");
    scanf ("%d",&number);

    printFibo(number);

    int result = fibonacci(number);

    printf("number is = %d",result);

    return 0;
}

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

void printFibo(int n) {

    printf("Fibonacci Series for %d :\n", n);

    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    printf("\n");
}






