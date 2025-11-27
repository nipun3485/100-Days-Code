#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int second = -1000000; // very small number

    // Find largest
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];
    }

    // Find second largest
    for (int i = 0; i < n; i++) {
        if (arr[i] > second && arr[i] < largest)
            second = arr[i];
    }

    printf("Second largest element = %d\n", second);

    return 0;
}

