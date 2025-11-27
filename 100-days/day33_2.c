#include <stdio.h>

int main() {
    int n, x, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];  // +1 because we will insert one extra element

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &x);

    // Find the correct position (from the end)
    i = n - 1;
    while (i >= 0 && arr[i] > x) {
        arr[i + 1] = arr[i];  // shift elements right
        i--;
    }

    arr[i + 1] = x;  // insert the element

    printf("Array after insertion:\n");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

