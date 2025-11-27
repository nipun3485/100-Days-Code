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

    int deque[n];  // stores indices
    int front = 0, back = -1;

    // Process first k elements (first window)
    for (int i = 0; i < k; i++) {
        while (front <= back && arr[deque[back]] <= arr[i])
            back--;
        deque[++back] = i;
    }

    // For the rest of windows
    for (int i = k; i < n; i++) {

        // Print max of previous window
        printf("%d ", arr[deque[front]]);

        // Remove elements that are out of this window
        while (front <= back && deque[front] <= i - k)
            front++;

        // Remove smaller elements as they are useless
        while (front <= back && arr[deque[back]] <= arr[i])
            back--;

        deque[++back] = i;
    }

    // Print max of last window
    printf("%d", arr[deque[front]]);

    return 0;
}

