#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    // Read dimensions of first matrix
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    // Read dimensions of second matrix
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Check matrix multiplication condition
    if (c1 != r2) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    int A[r1][c1], B[r2][c2], C[r1][c2];

    // Input for first matrix
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input for second matrix
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize result matrix with 0
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print result matrix
    printf("Resultant matrix:\n"

