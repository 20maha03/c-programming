#include <stdio.h>

int main()
{
    int number;

    printf("Enter number:\n");
    scanf("%d", &number);

    if (number < 1)
    {
        printf("Invalid number\n");
        return 1;
    }

    char hash[26];
    for (int i = 0; i < 26; i++)
    {
        hash[i] = 'A' + i;
    }

    printf("Hash table:\n");
    for (int i = 0; i < 26; i++)
    {
        printf("%c - %d\n", hash[i], i + 1);
    }

    char result[10];
    int pos = 0;

    while (number > 0)
    {
        int rem = (number - 1) % 26;
        result[pos++] = hash[rem];
        number = (number - 1) / 26;
    }

    printf("Result: ");
    for (int i = pos - 1; i >= 0; i--)
    {
        printf("%c", result[i]);
    }
    printf("\n");

    return 0;
}