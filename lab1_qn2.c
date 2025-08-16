#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n], transpose[n][n];

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Compute transpose
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Display original matrix
    printf("\nOriginal Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Display transpose
    printf("\nTranspose of the Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
