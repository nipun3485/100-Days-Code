#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int mat[n][n];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += mat[i][i];  // main diagonal element
    }

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}

