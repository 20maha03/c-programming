#include <stdio.h>

#define ROWS 4
#define COLS 5

// Function to find maximum sum subarray in 1D array
int kadane(int arr[], int *start, int *end, int n) {
    int maxSum = arr[0];
    int currMax = arr[0];
    *start = *end = 0;
    int tempStart = 0;

    for (int i = 1; i < n; i++) {
        if (currMax + arr[i] < arr[i]) {
            currMax = arr[i];
            tempStart = i;
        } else {
            currMax += arr[i];
        }

        if (currMax > maxSum) {
            maxSum = currMax;
            *start = tempStart;
            *end = i;
        }
    }
    return maxSum;
}

// Function to find maximum sum submatrix in a 2D matrix
void findMaximumSumSubmatrix(int matrix[ROWS][COLS]) {
    int maxSum = matrix[0][0];
    int finalLeft, finalRight, finalTop, finalBottom;
    int left, right, i;
    int temp[ROWS], sum, start, end;

    for (left = 0; left < COLS; ++left) {
        // Initialize temp array with 0s
        for (i = 0; i < ROWS; ++i)
            temp[i] = 0;

        for (right = left; right < COLS; ++right) {
            // Update temp array to include current column
            for (i = 0; i < ROWS; ++i)
                temp[i] += matrix[i][right];

            // Find maximum sum subarray in temp array
            sum = kadane(temp, &start, &end, ROWS);

            // Compare maxSum with sum to update final values if needed
            if (sum > maxSum) {
                maxSum = sum;
                finalLeft = left;
                finalRight = right;
                finalTop = start;
                finalBottom = end;
            }
        }
    }

    // Print maximum sum submatrix
    printf("Maximum sum is %d\n", maxSum);
    printf("Coordinates of the submatrix:\n");
    printf("Top: %d, Bottom: %d\n", finalTop, finalBottom);
    printf("Left: %d, Right: %d\n", finalLeft, finalRight);
}

int main() {
    int matrix[ROWS][COLS] = {
        {1, 2, -1, -4, -20},
        {-8, -3, 4, 2, 1},
        {3, 8, 10, 1, 3},
        {-4, -1, 1, 7, -6}
    };

    findMaximumSumSubmatrix(matrix);

    return 0;
}
