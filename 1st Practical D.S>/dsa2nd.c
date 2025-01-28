// Write a program to search an element using sequential method.

#include <stdio.h>

int sequentialSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        // Check if the current element matches the target
        if (arr[i] == target) {
            return i; // Return the index of the target
        }
    }
    return -1; // Element not found
}

int main() {
    int n, target;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &target);

    int result = sequentialSearch(arr, n, target);

    if (result != -1) {
        printf("Element found at index %d (0-based indexing).\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
