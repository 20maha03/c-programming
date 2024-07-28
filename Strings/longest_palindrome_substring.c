#include <stdio.h>
#include <string.h>

void printPalindrome(const char *str, int low, int high)
{
    for (int i = low; i <= high; ++i)
    {
        printf("%c", str[i]);
    }
}

void longPalindrome(const char *s)
{
    int n, low = 0, max = 1, i;

    n = strlen(s); 

    for (i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int flag = 1;

            for (int k = 0; k < (j - i +1) / 2; k++)
            {
                if (s[i + k] != s[j - k])
                {
                    flag = 0;
                }
            }
           
            if (flag && j - i + 1 > max)
            {
                low = i;
                max = j - i + 1;
            }
        }
    }

    printPalindrome(s, low, low + max - 1);
}
int main()
{
    char str[50];

    printf("Enter the string: ");
    scanf("%[^\n]s", str);
    getchar();

    longPalindrome(str);

    return 0;
}