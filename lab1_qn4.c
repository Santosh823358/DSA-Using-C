// Write a C program to check if a given two dimensional square matrix is a magic square (all rows, columns and diagonals have the same sum) and display the result.
#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of the first row (reference sum)
    int sum_ref = 0;
    for (int j = 0; j < n; j++) {
        sum_ref += matrix[0][j];
    }

    // Check sums of all rows
    for (int i = 1; i < n; i++) {
        int row_sum = 0;
        for (int j = 0; j < n; j++) {
            row_sum += matrix[i][j];
        }
        if (row_sum != sum_ref) {
            printf("The matrix is NOT a magic square.\n");
            return 0;
        }
    }

    // Check sums of all columns
    for (int j = 0; j < n; j++) {
        int col_sum = 0;
        for (int i = 0; i < n; i++) {
            col_sum += matrix[i][j];
        }
        if (col_sum != sum_ref) {
            printf("The matrix is NOT a magic square.\n");
            return 0;
        }
    }

    // Check main diagonal
    int main_diag = 0;
    for (int i = 0; i < n; i++) {
        main_diag += matrix[i][i];
    }
    if (main_diag != sum_ref) {
        printf("The matrix is NOT a magic square.\n");
        return 0;
    }

    // Check secondary diagonal
    int sec_diag = 0;
    for (int i = 0; i < n; i++) {
        sec_diag += matrix[i][n - i - 1];
    }
    if (sec_diag != sum_ref) {
        printf("The matrix is NOT a magic square.\n");
        return 0;
    }

    // If all checks passed
    printf("The matrix IS a magic square.\n");
    return 0;
}
