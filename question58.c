#include <stdio.h>

int main() {
    int n;

    // 1. Get the size of the array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // 2. Read the elements from the user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Initialize max and min with the first element of the array
    int max = arr[0];
    int min = arr[0];

    // 4. Loop through the array to find the true max and min
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Found a larger value, update max
        }
        if (arr[i] < min) {
            min = arr[i]; // Found a smaller value, update min
        }
    }

    // 5. Print the results
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}
