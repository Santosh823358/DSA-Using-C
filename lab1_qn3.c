// Write a C program to calculate the sum of the elements in the main diagonal and secondary diagonal of a square matrix and display the results.
#include <stdio.h>

int main() {
    int n, i, j;
    int mainSum = 0, secSum = 0;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculating sums of diagonals
    for(i = 0; i < n; i++) {
        mainSum += matrix[i][i];            
        secSum  += matrix[i][n - i - 1];   
    }

    // Displaying the matrix
    printf("\nMatrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of Main Diagonal = %d", mainSum);
    printf("\nSum of Secondary Diagonal = %d\n", secSum);

    return 0;
}
