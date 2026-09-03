#include <stdio.h>

int main() {
    int i, j;

    // Outer loop controls the number of rows (from 5 down to 1)
    for (i = 5; i >= 1; i--) {
        // Inner loop prints stars for each row
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
