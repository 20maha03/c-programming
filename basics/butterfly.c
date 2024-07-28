#include<stdio.h>

void butter(int n)
{
    for (int i = 0; i <= n - 1; i++) {
        // Left half of the upper part
        for (int j = 0; j <= i; j++) {
            if (j % 2 == 0) {
                printf("* ");
            } else {
                printf("  ");
            }
        }

        // Right half of the upper part
        for (int j = i + 1; j < n * 2 - 1; j++) {
            if (j % 2 == 0) {
                printf("* ");
            } else {
                printf("  ");
            }
        }

        printf("\n");
    }
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d",&n);

    butter(n);

    return 0;
}