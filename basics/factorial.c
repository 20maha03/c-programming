#include <stdio.h>

int addDigit(int n);

int main() {
    int n;

    printf("enter number\n");
    scanf("%d",&n);

    int result = addDigit(n);
    printf("result = %d",result);
}

int addDigit(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            sum = sum + i;
        }
        
    }
    return sum;
}