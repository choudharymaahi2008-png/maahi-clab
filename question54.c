#include <stdio.h>

int main() {
    int n = 4; // Number of rows in the upper half (including the middle row)

    // 1. Upper Half (Rows 1 to 4: growing from 1 to 7 stars)
    for (int i = 1; i <= n; i++) {
        
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        // Print stars (odd numbers: 1, 3, 5, 7)
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        
        printf("\n"); // Move to the next line
    }

    // 2. Lower Half (Rows 3 down to 1: shrinking from 5 down to 1 star)
    for (int i = n - 1; i >= 1; i--) {
        
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        // Print stars (odd numbers: 5, 3, 1)
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        
        printf("\n"); // Move to the next line
    }

    return 0;
}
