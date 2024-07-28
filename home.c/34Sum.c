/* #include <stdio.h>

void myStrcpy(char *dest, const char *src)
{
    while (*src)
    {
        *dest++ = *src++;
    }
    *dest = '\0';
}

void myStrcat(char *dest, const char *src)
{
    while (*dest)
    {
        dest++;
    }
    while (*src)
    {
        *dest++ = *src++;
    }
    *dest = '\0';
}

int main()
{
    int n = 1000;
    char arr[1000][20];

    myStrcpy(arr[0], "3");
    myStrcpy(arr[1], "4");

    int index = 2;
    for (int i = 0; i < index && index < n; i++)
    {
        myStrcpy(arr[index], arr[i]);
        myStrcat(arr[index], "3");
        index++;

        if (index >= n)
        {
            break;
        }

        myStrcpy(arr[index], arr[i]);
        myStrcat(arr[index], "4");
        index++;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%s\n", arr[i]);
    }

    return 0;
}  */


#include <stdio.h>
int main()
{
    int n;
    int k = 1;

    int a[10000];
    int i;
    a[0] = 3;
    a[1] = 4;

    printf("enter number\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {

        a[++k] = (a[i] * 10) + 3;
        a[++k] = (a[i] * 10) + 4; 
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}