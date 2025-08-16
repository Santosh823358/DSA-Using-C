// Write a program in C that obtains the minimum and maximum elements from the Array. Modify    this program to give the second largest and second smallest element of the array.
#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least 2 elements!\n");
        return 0;
    }

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = INT_MAX, secondMin = INT_MAX;
    int max = INT_MIN, secondMax = INT_MIN;

    for (int i = 0; i < n; i++) {
        // Find min and second min
        if (arr[i] < min) {
            secondMin = min;
            min = arr[i];
        } else if (arr[i] < secondMin && arr[i] != min) {
            secondMin = arr[i];
        }

        // Find max and second max
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);

    if (secondMin == INT_MAX)
        printf("Second Minimum not found (all elements same)\n");
    else
        printf("Second Minimum = %d\n", secondMin);

    if (secondMax == INT_MIN)
        printf("Second Maximum not found (all elements same)\n");
    else
        printf("Second Maximum = %d\n", secondMax);

    return 0;
}

