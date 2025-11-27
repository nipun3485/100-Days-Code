#include <stdio.h>

int main() {
    int n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    // Edge case: if k > n, no subarray possible
    if (k > n) {
        printf("-1\n");
        return 0;
    }

    int currentSum = 0;

    // First window sum
    for (int i = 0; i < k; i++) {
        currentSum += arr[i];
    }

    int maxSum = currentSum;

    // Slide the window
    for (int i = k; i < n; i++) {
        currentSum = currentSum - arr[i - k] + arr[i];
        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("%d\n", maxSum);

    return 0;
}

