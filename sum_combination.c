#include <stdio.h>

#define MAX_SIZE 100
#define MAX_COMBO_SIZE 10

void printCombination(int arr[], int combinationSize)
{
    for (int i = 0; i < combinationSize; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void findCombinations(int arr[], int start, int end, int target, int combination[], int combinationSize, int maxCombinationSize)
{
    if (target == 0 && combinationSize == maxCombinationSize)
    {
        printCombination(combination, combinationSize);
        return;
    }

    for (int i = start; i < end; i++)
    {
        // Avoid using the same element more than once
        if (i > start && arr[i] == arr[i - 1]) {
            continue;
        }

        combination[combinationSize] = arr[i];
        findCombinations(arr, i + 1, end, target - arr[i], combination, combinationSize + 1, maxCombinationSize);
    }
}

int main() {
    int size, sum, maxCombinationSize;
    int arr[MAX_SIZE];
    int combo[MAX_COMBO_SIZE];

    printf("Enter size: ");
    scanf("%d", &size);

    printf("Enter array elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter sum: ");
    scanf("%d", &sum);

    printf("Enter maximum combination size: ");
    scanf("%d", &maxCombinationSize);
    
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Combinations:\n");
    findCombinations(arr, 0, size, sum, combo, 0, maxCombinationSize);

    return 0;
}
