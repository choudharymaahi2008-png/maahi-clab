#include <stdio.h>

int main() {
    int n;
    int positive_count = 0, negative_count = 0, zero_count = 0;

    // 1. Get the size of the array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // 2. Read the elements from the user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Count positive, negative, and zero elements
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive_count++;  // Element is greater than 0
        } else if (arr[i] < 0) {
            negative_count++;  // Element is less than 0
        } else {
            zero_count++;      // Element is exactly 0
        }
    }

    // 4. Print the final counts
    printf("\nTotal Positive elements: %d\n", positive_count);
    printf("Total Negative elements: %d\n", negative_count);
    printf("Total Zero elements: %d\n", zero_count);

    return 0;
}
