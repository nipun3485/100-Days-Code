#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    // Total sum from 1 to n
    int total = n * (n + 1) / 2;

    // Try each x from 1 to n
    for (int x = 1; x <= n; x++) {
        long long leftSum = x * (x + 1) / 2;
        long long rightSum = total - (x - 1) * x / 2;

        if (leftSum == rightSum) {
            printf("%d\n", x);
            return 0;
        }
    }

    printf("-1\n");  // No pivot found
    return 0;
}

