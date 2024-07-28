#include <stdio.h>
#include <string.h>

void equivalentString(int number);
int getNumberOfDigit(int number);

int main() {
    int number;
    
    printf("Enter number: ");
    scanf("%d", &number);

    equivalentString(number);

    return 0;
}

void equivalentString(int number) {
    char arr[20]; 
    
    int digitCount = getNumberOfDigit(number);

    if (digitCount == 1) {
        switch (number) {
            case 1:
                strcpy(arr, "One");
                break;
            case 2:
                strcpy(arr, "Two");
                break;
            case 3:
                strcpy(arr, "Three");
                break;
            case 4:
                strcpy(arr, "Four");
                break;
            case 5:
                strcpy(arr, "Five");
                break;
            case 6:
                strcpy(arr, "Six");
                break;
            case 7:
                strcpy(arr, "Seven");
                break;
            case 8:
                strcpy(arr, "Eight");
                break;
            case 9:
                strcpy(arr, "Nine");
                break;
            default:
                strcpy(arr, "Unknown");
                break;
        }
    } else if (digitCount == 2) {
        int tens = number / 10;
        int ones = number % 10;

        switch (tens) {
            case 1:
                switch (ones) {
                    case 0:
                        strcpy(arr, "Ten");
                        break;
                    case 1:
                        strcpy(arr, "Eleven");
                        break;
                    case 2:
                        strcpy(arr, "Twelve");
                        break;
                    case 3:
                        strcpy(arr, "Thirteen");
                        break;
                    case 4:
                        strcpy(arr, "Fourteen");
                        break;
                    case 5:
                        strcpy(arr, "Fifteen");
                        break;
                    case 6:
                        strcpy(arr, "Sixteen");
                        break;
                    case 7:
                        strcpy(arr, "Seventeen");
                        break;
                    case 8:
                        strcpy(arr, "Eighteen");
                        break;
                    case 9:
                        strcpy(arr, "Nineteen");
                        break;
                }
                break;
            case 2:
                strcpy(arr, "Twenty");
                oneDigits(2,arr);
                break;
            case 3:
                strcpy(arr, "Thirty");
                oneDigits(3,arr);
                break;
            case 4:
                strcpy(arr, "Forty");
                oneDigits(4,arr);
                break;
            case 5:
                strcpy(arr, "Fifty");
                oneDigits(5,arr);
                break;
            case 6:
                strcpy(arr, "Sixty");
                oneDigits(6,arr);
                break;
            case 7:
                strcpy(arr, "Seventy");
                oneDigits(7,arr);
                break;
            case 8:
                strcpy(arr, "Eighty");
                oneDigits(8,arr);
                break;
            case 9:
                strcpy(arr, "Ninety");
                oneDigits(9,arr);
                break;
            default:
                strcpy(arr, "Unknown");
                break;
        }
    } else {
        strcpy(arr, "Unknown");
    }

    printf("Equivalent string: %s\n", arr);
}

int getNumberOfDigit(int number) {
    int count = 0;

    while (number > 0) {
        number /= 10;
        count++;
    }

    return count;
}

void oneDigits(int ones,char arr[]) {
    if (ones > 0) {
        strcat(arr, "-");
        switch (ones) {
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
            default :
                break;
        }
    }
}
