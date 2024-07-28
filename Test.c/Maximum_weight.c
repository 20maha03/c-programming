#include <stdio.h>

void findMaximumWeight(int weights[], int values[], int n, int currentIndex, int currentWeight, int currentValue, int K, int *maxWeightSum) {
    if (currentIndex == n) {
        if (currentValue > 0 && (double)currentWeight / currentValue == K) {
            if (currentWeight > *maxWeightSum) {
                *maxWeightSum = currentWeight;
            }
        }
        return;
    }

    // Include current item in subset
    findMaximumWeight(weights, values, n, currentIndex + 1, currentWeight + weights[currentIndex], currentValue + values[currentIndex], K, maxWeightSum);

    // Exclude current item from subset
    findMaximumWeight(weights, values, n, currentIndex + 1, currentWeight, currentValue, K, maxWeightSum);
}


int main() {
    int weights[] = {4, 8, 9};
    int values[] = {2, 4, 6};
    int n = sizeof(weights) / sizeof(weights[0]);
    int K = 2;

    int maxWeightSum = 0;
    
    findMaximumWeight(weights, values, n, 0, 0, 0, K, &maxWeightSum);

    printf("Maximum weight sum : %d\n", maxWeightSum);

    return 0;
}
