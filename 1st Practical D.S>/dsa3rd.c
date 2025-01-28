// Write program to search an element using binary search method.

#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        // Check if the target is at mid
        if (arr[mid] == target) {
            return mid; // Return the index of the target
        }
        // If target is smaller, search the left half
        else if (arr[mid] > target) {
            high = mid - 1;
        }
        // If target is larger, search the right half
        else {
            low = mid + 1;
        }
    }

    return -1; // Element not found
}

int main() {
    int n, target;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &target);

    int result = binarySearch(arr, n, target);

    if (result != -1) {
        printf("Element found at index %d (0-based indexing).\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
