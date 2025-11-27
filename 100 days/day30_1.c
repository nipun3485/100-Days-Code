#include <stdio.h>

int main() {
    int n, even = 0, odd = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Read elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count even and odd
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Total even numbers = %d\n", even);
    printf("Total odd numbers = %d\n", odd);

    return 0;
}

