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

    if (k > n) {
        printf("-1\n");
        return 0;
    }

    int negIndices[n];
    int front = 0, back = -1;

    // Process first window
    for (int i = 0; i < k; i++) {
        if (arr[i] < 0)
            negIndices[++back] = i;
    }

    // Slide through the array
    for (int i = k; i < n; i++) {

        // Print first negative of previous window
        if (front <= back)
            printf("%d ", arr[negIndices[front]]);
        else
            printf("0 ");

        // Remove elements that go out of the window
        while (front <= back && negIndices[front] <= i - k)
            front++;

        // Add the new index if negative
        if (arr[i] < 0)
            negIndices[++back] = i;
    }

    // Print result for the last window
    if (front <= back)
        printf("%d", arr[negIndices[front]]);
    else
        printf("0");

    return 0;
}

