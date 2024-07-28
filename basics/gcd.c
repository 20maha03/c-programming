#include <stdio.h>

int gcd(int a, int b);
int main() {
    int a, b;

    printf("enter a\n");
    scanf("%d", &a);
    printf("enter b\n");
    scanf("%d", &b);
    
    int result = gcd(a,b);
    printf("ans is %d",result);
    
}
int gcd(int a, int b) {
    if(b == 0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
}