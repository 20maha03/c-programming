#include <stdio.h>

int main() {

    int number;
    printf("Enter number N: ");
    scanf("%d", &number);
    
    while (number != 0) {

        int temp = number; int zero = 0; int one = 1;

        while (temp != 0) {
            
            int rem = number % 10;
            temp /= 10;
        
            if(rem != 0) {
                zero += one;
            }

            one *= 10;

        }

        printf("%d ",zero);

        number  -= zero;
    }
    
    return 0;
}


