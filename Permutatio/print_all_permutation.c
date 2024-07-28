#include <stdio.h>

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}


void fun(int arr1[], int index, int size, int ans[], int arrIndex)
{

    if (index == size)
    {
        printArray(ans, arrIndex);
        return;
    }

    ans[arrIndex] = arr1[index];
    fun(arr1, index + 1, size, ans, arrIndex + 1);

    fun(arr1, index + 1, size, ans, arrIndex);
}

int main()
{
    int size;

    printf("Enter size: ");
    scanf("%d", &size);

    printf("Enter array elements:\n");
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    

    int arr2[size];
    fun(arr, 0, size, arr2, 0);

    return 0;
}
