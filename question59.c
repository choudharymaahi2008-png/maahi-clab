#include <stdio.h>

int main() {
    int n;
    int even_count = 0, odd_count = 0;

    // 1. Get the size of the array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // 2. Read the elements from the user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Count even and odd elements
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;  // Increment even counter if remainder is 0
        } else {
            odd_count++;   // Increment odd counter otherwise
        }
    }

    // 4. Print the final counts
    printf("\nTotal Even elements: %d\n", even_count);
    printf("Total Odd elements: %d\n", odd_count);

    return 0;
}
