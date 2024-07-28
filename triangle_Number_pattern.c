#include <stdio.h>

void p1(int number);

int main() {
    
   int number;

   printf("enter number\n");
   scanf("%d",&number);

   p1(number);

}
void p1(int number) {
    int mid = number / 2;
    int currentNumber = 1;
    int spaces = mid; 
    
    for (int i = 1; i <= mid + 1; i++) {
        for (int j = 1; j <= spaces; j++) {
            printf(" ");
        }
        
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j % 2 == 0) {
                printf(" ");
            } 
            else {
                printf("%d", currentNumber++);
            }
        }
        
        printf("\n");
        spaces--;  
    }
}


