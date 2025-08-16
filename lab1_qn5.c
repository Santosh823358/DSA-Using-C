// Write a C program for matrix addition and multiplication.

#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10], product[10][10];
    int r1, c1, r2, c2;
    int i, j, k;

    // Input dimensions of matrices
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix Addition (possible only if r1=r2 and c1=c2)
    if (r1 == r2 && c1 == c2) {
        printf("\nMatrix Addition Result:\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                sum[i][j] = a[i][j] + b[i][j];
                printf("%d\t", sum[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("\nMatrix addition not possible (dimension mismatch)\n");
    }

    // Matrix Multiplication (possible only if c1 = r2)
    if (c1 == r2) {
        printf("\nMatrix Multiplication Result:\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                product[i][j] = 0;
                for (k = 0; k < c1; k++) {
                    product[i][j] += a[i][k] * b[k][j];
                }
                printf("%d\t", product[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("\nMatrix multiplication not possible (dimension mismatch)\n");
    }

    return 0;
}
