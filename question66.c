#include <stdio.h>

void insertSorted(int arr[], int *n, int capacity, int key) {
    // Check if the array is already full
    if (*n >= capacity) {
        printf("Array overflow. Cannot insert.\n");
        return;
    }

    int i = *n - 1;

    // Shift elements greater than key to the right
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i];
        i--;
    }

    // Insert the key at its correct position
    arr[i + 1] = key;
    
    // Increase the current size of the array
    (*n)++;
}

int main() {
    int arr[10] = {10, 20, 30, 40, 50}; // Capacity is 10
    int n = 5; // Current number of elements
    int key = 25; // Element to insert

    insertSorted(arr, &n, 10, key);

    // Print the updated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
