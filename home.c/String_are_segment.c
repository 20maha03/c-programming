#include <stdio.h>

int getLength(char *str)
{
    int count = 0;
    while (str[count] != '\0')
    {
        count++;
    }
    return count;
}

int areStringsEqual(char *str1, char *str2)
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            return 0;
        }
        i++;
    }
    return str1[i] == '\0' && str2[i] == '\0';
}

void copySubstring(char *dest, char *src, int start, int end)
{
    int j = 0;
    for (int i = start; i <= end; i++)
    {
        dest[j++] = src[i];
    }
    dest[j] = '\0';
}

int isSegmentInArray(char arr[][20], int numStrings, char *segment, int *index)
{
    for (int j = 0; j < numStrings; j++)
    {
        if (areStringsEqual(arr[j], segment))
        {
            *index = j;
            return 1;
        }
    }
    return 0;
}

void checkTheStringSegmented(char arr[][20], char str[])
{
    int count = 0;
    int numStrings = 0;

    while (arr[numStrings][0] != '\0')
    {
        numStrings++;
    }

    int strLength = getLength(str);
    int i = 0;
    while (i < strLength)
    {
        int found = 0;
        for (int j = 0; j < numStrings; j++)
        {
            int segmentLength = getLength(arr[j]);
            char segment[21];
            copySubstring(segment, str, i, i + segmentLength - 1);
            int index;
            if (isSegmentInArray(arr, numStrings, segment, &index))
            {
                printf("Matching segment: %s at index %d\n", segment, index);
                i += segmentLength;
                found = 1;
                count++;
                break;
            }
        }
        if (!found)
        {
            i++;
        }
    }

    printf("The number of matching segments is: %d\n", count);
}

int main()
{
    char arr[50][20] = {0};
    int i = 0;

    printf("Enter string array:\n");
    while (1)
    {
        scanf("%s", arr[i]);

        if (getchar() == '\n')
        {
            break;
        }
        i++;
    }

    printf("string array\n");
    for (int j = 0; j <= i; j++)
    {
        printf("%s\n", arr[j]);
    }

    printf("String array:\n");
    for (int j = 0; j < i; j++)
    {
        printf("%s\n", arr[j]);
    }

    char str[100];
    printf("Enter string:\n");
    scanf("%99s", str);

    checkTheStringSegmented(arr, str);
    return 0;
}