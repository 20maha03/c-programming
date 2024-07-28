#include <stdio.h>

void my_strcat(char *str1, char *str2)
{
    char *start = str1;
    while (*start != '\0')
    {
        start++;
    }
    while (*str2 != '\0')
    {
        *start = *str2;
        start++;
        str2++;
    }
    *start = '\0';
}

void my_strcpy(char *dest, const char *src)
{
    while ((*dest++ = *src++))
        ;
}

int getNumberOfDigits(int number)
{
    int count = 0;
    while (number > 0)
    {
        number /= 10;
        count++;
    }
    return count;
}

void onesDigit(char arr[], int ones)
{
    if (ones > 0)
    {
        switch (ones)
        {
        case 1:
            my_strcat(arr, "One");
            break;
        case 2:
            my_strcat(arr, "Two");
            break;
        case 3:
            my_strcat(arr, "Three");
            break;
        case 4:
            my_strcat(arr, "Four");
            break;
        case 5:
            my_strcat(arr, "Five");
            break;
        case 6:
            my_strcat(arr, "Six");
            break;
        case 7:
            my_strcat(arr, "Seven");
            break;
        case 8:
            my_strcat(arr, "Eight");
            break;
        case 9:
            my_strcat(arr, "Nine");
            break;
        default:
            break;
        }
    }
}

void tensDigits(char arr[], int tens, int ones)
{
    if (tens == 1)
    {
        switch (ones)
        {
        case 0:
            my_strcat(arr, "Ten");
            break;
        case 1:
            my_strcat(arr, "Eleven");
            break;
        case 2:
            my_strcat(arr, "Twelve");
            break;
        case 3:
            my_strcat(arr, "Thirteen");
            break;
        case 4:
            my_strcat(arr, "Fourteen");
            break;
        case 5:
            my_strcat(arr, "Fifteen");
            break;
        case 6:
            my_strcat(arr, "Sixteen");
            break;
        case 7:
            my_strcat(arr, "Seventeen");
            break;
        case 8:
            my_strcat(arr, "Eighteen");
            break;
        case 9:
            my_strcat(arr, "Nineteen");
            break;
        default:
            break;
        }
    }
    else
    {
        switch (tens)
        {
        case 2:
            my_strcat(arr, "Twenty");
            break;
        case 3:
            my_strcat(arr, "Thirty");
            break;
        case 4:
            my_strcat(arr, "Forty");
            break;
        case 5:
            my_strcat(arr, "Fifty");
            break;
        case 6:
            my_strcat(arr, "Sixty");
            break;
        case 7:
            my_strcat(arr, "Seventy");
            break;
        case 8:
            my_strcat(arr, "Eighty");
            break;
        case 9:
            my_strcat(arr, "Ninety");
            break;
        default:
            break;
        }
        if (ones > 0)
        {
            my_strcat(arr, " ");
            onesDigit(arr, ones);
        }
    }
}

void equivalentString(int number)
{
    char arr[50] = "";
    int digitCount = getNumberOfDigits(number);

    if (digitCount == 1)
    {
        onesDigit(arr, number);
    }
    else if (digitCount == 2)
    {
        int tens = number / 10;
        int ones = number % 10;
        tensDigits(arr, tens, ones);
    }
    else if (digitCount == 3)
    {
        int hundreds = number / 100;
        int remainder = number % 100;
        int tens = remainder / 10;
        int ones = remainder % 10;

        onesDigit(arr, hundreds);
        my_strcat(arr, " Hundred");

        if (remainder != 0)
        {
            my_strcat(arr, " and ");
            tensDigits(arr, tens, ones);
        }
    }
    else if (digitCount == 4)
    {
        int thousands = number / 1000;
        int remainder = number % 1000;
        int hundreds = remainder / 100;
        remainder %= 100;
        int tens = remainder / 10;
        int ones = remainder % 10;

        onesDigit(arr, thousands);
        my_strcat(arr, " Thousand");

        onesDigit(arr, hundreds);
        my_strcat(arr, " Hundred");

        if (remainder != 0)
        {
            my_strcat(arr, " and ");
            tensDigits(arr, tens, ones);
        }
    }
    else
    {
        my_strcpy(arr, "Unknown");
    }

    printf("Equivalent string: %s\n", arr);
}

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    equivalentString(number);

    return 0;
}
