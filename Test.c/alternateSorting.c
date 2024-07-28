#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void alternateSort(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 2; j < n; j += 2)
        {
            if (i % 2 == 0 && j % 2 == 0)
            {
                if (arr[i] < arr[j])
                {
                    swap(&arr[i], &arr[j]);
                }
            }
            else if (arr[i] > arr[j])
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }

    printf("Output: {");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if (i != n - 1)
        {
            printf(", ");
        }
    }
    printf("}\n");
}

int main()
{

    int arr[] = {2, 6, 4, 1, 5, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Input: {");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if (i != n - 1)
        {
            printf(", ");
        }
    }
    printf("}\n");

    alternateSort(arr, n);

    return 0;
}
