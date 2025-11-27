#include <stdio.h>

int main() {
    int rows, cols, sum = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int mat[rows][cols];

    // Read matrix
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
            sum += mat[i][j];  // Add during input
        }
    }

    // Output sum
    printf("Sum of all elements = %d\n", sum);

    return 0;
}

