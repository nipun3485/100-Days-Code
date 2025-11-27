#include <stdio.h>

int main() {
    int n, x;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    int low = 0, high = n - 1;
    int answer = -1;

    // Binary search for ceil of x
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] >= x) {
            answer = mid;       // possible ceil
            high = mid - 1;     // try to find earlier occurrence
        } else {
            low = mid + 1;
        }
    }

    printf("%d\n", answer);   // prints index or -1

    return 0;
}

