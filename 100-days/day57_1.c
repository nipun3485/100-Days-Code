#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], pge[n], stack[n];
    int top = -1;

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Process from left to right
    for (int i = 0; i < n; i++) {

        // Pop all elements <= current element
        while (top != -1 && stack[top] <= arr[i]) {
            top--;
        }

        // If stack empty → no previous greater
        if (top == -1)
            pge[i] = -1;
        else
            pge[i] = stack[top];

        // Push current element
        stack[++top] = arr[i];
    }

    // Print comma-separated output
    for (int i = 0; i < n; i++) {
        printf("%d", pge[i]);
        if (i != n - 1)
            printf(", ");
    }

    return 0;
}

