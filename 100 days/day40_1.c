#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal Traversal:\n");

    // Print diagonals starting from first row
    for (int col = 0; col < n; col++) {
        int i = 0, j = col;
        while (i < n && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    // Print diagonals starting from last column except top element
    for (int row = 1; row < n; row++) {
        int i = row, j = n - 1;
        while (i < n && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}

