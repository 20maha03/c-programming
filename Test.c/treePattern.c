#include <stdio.h>

void p1(int n) {
    
    for (int i = 0; i < n; i++) {
        for (int j =  0; j < n; j++) {
            if(i == n / 2 || i == 0 && j == n / 2) {
                printf("* ");
            } else if( j == (n / 2)- i || j == (n / 2) + i) {
                printf("* ");
            } else if(i > (n / 2)  && (j == (n / 2) - 1 || j == (n / 2) + 1)){
                printf("* ");
            } else {
                printf("  ");
            }

        }
        printf("\n");
    }
}
int main() {

    int n;

    printf("enter n\n");
    scanf("%d",&n);

    p1(n);
}