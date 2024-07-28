#include <stdio.h>

int factorial(int n);

int main() {
    int num;
     
    printf("enter num\n");
    scanf ("%d",&num);
    if (num < 0) {
        printf("it is negative numbers.\n");
    } 
    else {
        int result = factorial(num);
        printf("Factorial of %d is: %d\n", num, result);
    }
    
    return 0;
}

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}


    