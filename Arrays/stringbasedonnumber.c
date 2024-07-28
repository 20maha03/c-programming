#include <stdio.h>
#include <string.h>

void equivalentString(int number);
int getNumberOfDigits(int number);
void onesDigit(char arr[], int ones);
void tensDigits(char arr[], int tens, int ones);

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    equivalentString(number);

    return 0;
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
        strcat(arr, " Hundred");
        if (remainder != 0)
        {
            strcat(arr, " and ");
            tensDigits(arr, tens, ones);
        }
    }
    else
    {
        strcpy(arr, "Unknown");
    }

    printf("Equivalent string: %s\n", arr);
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
            strcat(arr, "One");
            break;
        case 2:
            strcat(arr, "Two");
            break;
        case 3:
            strcat(arr, "Three");
            break;
        case 4:
            strcat(arr, "Four");
            break;
        case 5:
            strcat(arr, "Five");
            break;
        case 6:
            strcat(arr, "Six");
            break;
        case 7:
            strcat(arr, "Seven");
            break;
        case 8:
            strcat(arr, "Eight");
            break;
        case 9:
            strcat(arr, "Nine");
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
            strcat(arr, "Ten");
            break;
        case 1:
            strcat(arr, "Eleven");
            break;
        case 2:
            strcat(arr, "Twelve");
            break;
        case 3:
            strcat(arr, "Thirteen");
            break;
        case 4:
            strcat(arr, "Fourteen");
            break;
        case 5:
            strcat(arr, "Fifteen");
            break;
        case 6:
            strcat(arr, "Sixteen");
            break;
        case 7:
            strcat(arr, "Seventeen");
            break;
        case 8:
            strcat(arr, "Eighteen");
            break;
        case 9:
            strcat(arr, "Nineteen");
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
            strcat(arr, "Twenty");
            break;
        case 3:
            strcat(arr, "Thirty");
            break;
        case 4:
            strcat(arr, "Forty");
            break;
        case 5:
            strcat(arr, "Fifty");
            break;
        case 6:
            strcat(arr, "Sixty");
            break;
        case 7:
            strcat(arr, "Seventy");
            break;
        case 8:
            strcat(arr, "Eighty");
            break;
        case 9:
            strcat(arr, "Ninety");
            break;
        default:
            break;
        }
        if (ones > 0)
        {
            strcat(arr, " ");
            onesDigit(arr, ones);
        }
    }
}