#include <stdio.h>

void findMinMaxSums(int arr[], int n, int *minSum, int *maxSum) {
    int totalSum = 0;
    int minElement = arr[0];
    int maxElement = arr[0];

    // Calculate the total sum of the array and find the min and max elements
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    // The minimum sum is the total sum minus the maximum element
    // The maximum sum is the total sum minus the minimum element
    *minSum = totalSum - maxElement;
    *maxSum = totalSum - minElement;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int minSum, maxSum;

    findMinMaxSums(arr, n, &minSum, &maxSum);

    printf("Minimum sum: %d\n", minSum);
    printf("Maximum sum: %d\n", maxSum);

    return 0;
}
