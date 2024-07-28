/* #include <stdio.h>

int hash[100] = {0};

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void check(int ans[], int size, int number)
{

    if (size <= number && size > 0)
    {
        int sum = 0;
        for (int i = 0; i < size && ans[i] != 0; i++)
        {
            sum += ans[i];
        }
        if (sum == number)
        {   
            printArray(ans, size);
        }
    }
}

void checking(int ans[], int size, int number) {


}
void checkReplication(int ans[], int size, int number)
{

    if (size <= number && size > 0)
    {

        int sum;

        for (int i = 0; i < size && ans[i] != 0; i++)
        {
            sum = 0;
            for (int j = 0; j < size; j++)
            {
                sum += ans[i];
                if (sum == number && hash[ans[i]] == 0)
                {   
                    hash[ans[i]] = 1;
                    for (int k = 0; k <= j; k++)
                    {
                        printf("%d ", ans[i]);
                    }
                    printf("\n");
                }
            }
        }
    }
}

void fun(int arr1[], int index, int size, int ans[], int arrIndex, int sum)
{

    if (index == size)
    {
        checkReplication(ans, arrIndex, sum);
        check(ans, arrIndex, sum);

        return;
    }

    ans[arrIndex] = arr1[index];

    fun(arr1, index + 1, size, ans, arrIndex + 1, sum);

    fun(arr1, index + 1, size, ans, arrIndex, sum);
}

int main()
{
    int number;

    printf("Enter size: ");
    scanf("%d", &number);

    printf("Enter array elements:\n");
    int arr[number];
    for (int i = 1; i <= number; i++)
    {
        arr[i] = i;
    }
    
    printf("%d\n",number);
    int arr2[number];
    fun(arr, 0, number, arr2, 0, number);

    return 0;
}

num = 5

output :

5
4 1
3 1 1 
3 2
2 1 1 1
2 2 1 
1 1 1 1 1 */


#include <stdio.h>

void printCombinations(int arr[], int index) {
    for (int i = 0; i < index; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void findCombinationsUtil(int arr[], int index, int num, int start) {
    if (num == 0) {
        printCombinations(arr, index);
        return;
    }

    for (int i = start; i <= num; i++) {
        arr[index] = i;
        findCombinationsUtil(arr, index + 1, num - i, i);
    }
}

void findCombinations(int num) {
    int arr[num];  
    findCombinationsUtil(arr, 0, num, 1);
}

int main() {
    int number;

    printf("Enter size: ");
    scanf("%d", &number);
    findCombinations(number);
    return 0;
}
