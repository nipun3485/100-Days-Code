#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], nge[n], stack[n];
    int top = -1;

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Process from right to left
    for (int i = n - 1; i >= 0; i--) {

        // Pop all elements smaller or equal to arr[i]
        while (top != -1 && stack[top] <= arr[i]) {
            top--;
        }

        // If empty, no greater element
        nge[i] = (top == -1) ? -1 : stack[top];

        // Push current element
        stack[++top] = arr[i];
    }

    // Print result in comma-separated format
    for (int i = 0; i < n; i++) {
        printf("%d", nge[i]);
        if (i != n - 1)
            printf(", ");
    }

    return 0;
}

