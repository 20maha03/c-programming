#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    
    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < n; j++) {
            printf("%d ",((i + j) % n) + 1);
        }
        printf("\n");
    } 
    /* for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < n; j++) {
            if (j >= i) {
                printf("%d ", j - i + 1);
            } else {
                printf("%d ", n - i + j);
            }
        }
        printf("\n");
    }
 */
    return 0;
}
