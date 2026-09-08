#include <stdio.h>

int main() {
    int n, sum = 0;

    // 1. Get the size of the array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // 2. Read the elements from the user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Calculate the sum of the elements
    for (int i = 0; i < n; i++) {
        sum += arr[i]; // Same as: sum = sum + arr[i];
    }

    // 4. Print the final calculated sum
    printf("Sum of array elements: %d\n", sum);

    return 0;
}
