#include <stdio.h>

int getSize(char *str)
{

    int count = 0;
    while (*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}

void printString(char str[], int start, int end) {

    for (int j = start; j < end; j++) {
        printf("%c",str[j]);
    }
}

void checkSubstring(char str[], char search, int position)
{

    int len = getSize(str);

    int count = 0;

    for (int i = 0; i < len; i++)
    {

        if (str[i] == search)
        {
            count++;
            if (count == position)
            {
                printString(str, i + 1, len);
            }
        }
    }
}

int main()
{

    char str[100];
    printf("enter string\n");
    scanf("%s", str);

    getchar();

    char searchString;
    printf("enter string\n");
    scanf("%c", &searchString);

    int k;

    printf("enter k value\n");
    scanf("%d", &k);
    checkSubstring(str, searchString, k);
}
