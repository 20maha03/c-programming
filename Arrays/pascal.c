#include <stdio.h>

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    for (int i = 0; i < number; i++)
    {
        
        int val = 1; 
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                val = 1;
            else
                val = val * (i - j + 1) / j;

            printf("%d ", val);
        }
        printf("\n");
    }

    return 0;
}
