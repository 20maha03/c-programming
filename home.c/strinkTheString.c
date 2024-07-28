#include <stdio.h>

void findTheRange(char str1[], int size1, char str2[], int size2)
{
    int arr[100];
    int index = 0;
    for (int i = 0; i < size2; i++)
    {
        for (int j = 0; j < size1; j++)
        {
            if (str2[i] == str1[j])
            {
                arr[index++] = j;
                break;
            }
        }
    }

    if (index == 0)
    {
        printf("None of the characters of str2 are found in str1.\n");
        return;
    }

    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < index; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    for (int i = min; i <= max; i++)
    {
        printf("%c", str1[i]);
    }
    printf("\n");
}

int getSize(char str[])
{
    int count = 0;
    while (str[count] != '\0')
    {
        count++;
    }
    return count;
}

int main()
{
    char str1[100];
    char str2[100];

    printf("Enter string 1: ");
    scanf("%[^\n]", str1);
    getchar(); 
    printf("Enter string 2: ");
    scanf("%[^\n]", str2);

    int size1 = getSize(str1);
    int size2 = getSize(str2);

    findTheRange(str1, size1, str2, size2);

    return 0;
}
