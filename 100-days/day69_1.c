#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers (one will be repeated):\n", n);

    // XOR of all array elements
    int xorAll = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        xorAll ^= arr[i];       // XOR the element
    }

    // XOR numbers from 0 to n-2
    for (int i = 0; i <= n - 2; i++) {
        xorAll ^= i;
    }

    // Remaining value is the repeated number
    printf("%d\n", xorAll);

    return 0;
}

