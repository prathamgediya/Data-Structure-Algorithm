// Implement array using row major order and column major order.

#include <stdio.h>

#define ROWS 3
#define COLS 4

void printRowMajor(int arr[ROWS][COLS]) {
    printf("Row-Major Order:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void printColumnMajor(int arr[ROWS][COLS]) {
    printf("Column-Major Order:\n");
    for (int j = 0; j < COLS; j++) {
        for (int i = 0; i < ROWS; i++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int arr[ROWS][COLS];

    // Input array elements
    printf("Enter elements of a %dx%d array:\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Display the array in row-major order
    printRowMajor(arr);

    // Display the array in column-major order
    printColumnMajor(arr);

    return 0 ;
}
