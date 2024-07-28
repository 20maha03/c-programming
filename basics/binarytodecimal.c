#include <stdio.h>

int countDigit(int number);
int binaryToDecimal(int number);
int power(int base, int exponent);

int main() {
    int number;

    printf("Enter binary number: ");
    scanf("%d", &number);

    int result = binaryToDecimal(number);

    printf("Decimal result = %d\n", result);

    return 0;
}

int countDigit(int number) {
    int cnt = 0;

    while (number != 0) {
        number /= 10;
        cnt++;
    }

    return cnt;
}

int binaryToDecimal(int number) {
    int sum = 0;
    int size = countDigit(number) - 1; 
    int temp = number;
    int i = 0;
    while (temp != 0) {
        int digit = temp % 10;
        sum += digit * power(2, i);
        temp /= 10;
        i++;
    }

    return sum;
}

int power(int base, int exponent) {
    int result = 1;
    
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    
    return result;
}
