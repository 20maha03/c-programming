#include <stdio.h>

int minNumberToMakeAlternativeOneAndZeros(char str[])
{
    int ones = 0;
    int zeros = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (i % 2 == 0)
        {
            if (str[i] != '0')
            {
                ones++;
            }
            else
            {
                zeros++;
            }
        }
        else
        {
            if (str[i] != '1')
            {
                ones++;
            }
            else
            {
                zeros++;
            }
        }
    }

    return ones < zeros ? ones : zeros;
}
int main()
{

    char str[100];
    printf("enter string\n");
    scanf("%s", str);

    int result = minNumberToMakeAlternativeOneAndZeros(str);
    printf("result = %d", result);
}