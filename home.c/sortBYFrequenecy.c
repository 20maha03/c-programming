#include <stdio.h>

#define MAX_SIZE 100

int frequency[MAX_SIZE];

void put(int key, int value)
{
    frequency[key] = value;
}

int get(int key)
{
    return frequency[key];
}

void delete(int key)
{
    frequency[key] = 0;
}

void calculateFrequencies(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        put(arr[i], get(arr[i]) + 1);
    }
}

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {

            if (get(arr[j]) < get(arr[j + 1]))
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
          
            else if (get(arr[j]) == get(arr[j + 1]) && arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int removeDuplicates(int arr[], int size)
{
    if (size == 0 || size == 1)
        return size;

    int temp[size];
    int j = 0;

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            temp[j++] = arr[i];
        }
    }
    temp[j++] = arr[size - 1];

    for (int i = 0; i < j; i++)
    {
        arr[i] = temp[i];
    }

    return j;
}

int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < MAX_SIZE; i++)
    {
        frequency[i] = 0;
    }

    calculateFrequencies(arr, size);
    bubbleSort(arr, size);

    int newSize = removeDuplicates(arr, size);

    printf("Sorted array by frequency with duplicates removed:\n");
    for (int i = 0; i < newSize; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
