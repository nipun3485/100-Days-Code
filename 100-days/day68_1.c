#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    int sum = 0;

    printf("Enter %d elements (0 to %d with one missing):\n", n, n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Expected sum of numbers from 0 to n
    int total = n * (n + 1) / 2;

    int missing = total - sum;

    printf("%d\n", missing);

    return 0;
}

