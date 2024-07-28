#include <stdio.h>

void changeTheFirstAndLastPositions(int size, char arr[size][100])
{
    char temp[100];
    int i = 0;

    while (arr[size - 1][i] != '\0')
    {
        temp[i] = arr[size - 1][i];
        i++;
    }
    temp[i] = '\0';

    i = 0;
    while (arr[0][i] != '\0')
    {
        arr[size - 1][i] = arr[0][i];
        i++;
    }
    arr[size - 1][i] = '\0';

    i = 0;
    while (temp[i] != '\0')
    {
        arr[0][i] = temp[i];
        i++;
    }
    arr[0][i] = '\0';

    printf("After:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%s\n", arr[i]);
    }
}

int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    getchar();
    char str[size][100];

    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%99s", str[i]);
    }

    printf("Before:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%s\n", str[i]);
    }

    changeTheFirstAndLastPositions(size, str);

    return 0;
}
