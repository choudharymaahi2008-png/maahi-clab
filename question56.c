#include <stdio.h>

int main() {
    int n;

    // 1. Get the total number of elements (e.g., 3)
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // 2. Read the elements from the user (e.g., 10, 20, 30)
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Print the elements side-by-side with spaces
    printf("Output: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
