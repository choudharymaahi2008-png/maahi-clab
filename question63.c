#include <stdio.h>

int main() {
int n1, n2, i, j, k = 0;
int arr1[100], arr2[100], merged[200], temp;

 if (scanf("%d", &n1) != 1) return 0;
    for (i = 0; i < n1; i++) {
 scanf("%d", &arr1[i]);
 merged[k++] = arr1[i]; // Copy to merged array
    }

    // Read size and elements of the second array
    if (scanf("%d", &n2) != 1) return 0;
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
        merged[k++] = arr2[i]; // Append to merged array
    }

    // Bubble Sort the merged array
    for (i = 0; i < k - 1; i++) {
        for (j = 0; j < k - i - 1; j++) {
            if (merged[j] > merged[j + 1]) {
                temp = merged[j];
                merged[j] = merged[j + 1];
                merged[j + 1] = temp;
            }
        }
    }

    // Print unique elements from the sorted array
    for (i = 0; i < k; i++) {
        if (i == 0 || merged[i] != merged[i - 1]) {
            printf("%d ", merged[i]);
        }
    }
    printf("\n");

    return 0;
}
