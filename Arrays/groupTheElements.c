#include <stdio.h>

void printArray(int ans[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", ans[i]);
    }
    printf("\n");
}

void findTheGroups(int ans[], int size, int k, int* count) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += ans[i];
    }
    
    if (sum % k == 0 && size <= k && size > 1) {
        printArray(ans, size);
        (*count)++;
    }
}

void subSequence(int arr[], int index, int size, int ans[], int ansIndex, int k, int* count) {
    if (index == size) {
        findTheGroups(ans, ansIndex, k, count);
        return;
    }
    
    ans[ansIndex] = arr[index];
    subSequence(arr, index + 1, size, ans, ansIndex + 1, k, count);
    subSequence(arr, index + 1, size, ans, ansIndex, k, count);
}

int main() {
    int size;

    printf("Enter size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter array elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int ans[size];
    int k;
    printf("Enter k: ");
    scanf("%d", &k);

    int count = 0;
    subSequence(arr, 0, size, ans, 0, k, &count);

    printf("Number of valid subsequences: %d\n", count);

    return 0;
}
