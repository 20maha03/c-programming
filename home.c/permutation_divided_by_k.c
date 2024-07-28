#include <stdio.h>

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void check(int ans[], int size, int k) {
    if(size <= k && size > 0) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += ans[i];
    }
    if(sum % k == 0) {
        printArray(ans,size);
    }
    }
}

void fun(int arr1[], int index, int size, int ans[], int arrIndex,int k)
{

    if (index == size)
    {
        check(ans, arrIndex,k);
        return;
    }

    ans[arrIndex] = arr1[index];
    fun(arr1, index + 1, size, ans, arrIndex + 1,k);

    fun(arr1, index + 1, size, ans, arrIndex,k);
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
    int k;
    printf("enter k\n");
    scanf("%d",&k);
    int arr2[size];
    fun(arr, 0, size, arr2, 0,k);

    return 0;
}
