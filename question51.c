#include <stdio.h>

int main() {
    int i, j;
    
    // Outer loop controls the number of rows (1 to 5)
    for (i = 1; i <= 5; i++) {
        // Inner loop prints numbers from (5 - i + 1) up to 5
        for (j = 5 - i + 1; j <= 5; j++) {
            printf("%d", j);
        }
        // Move to the next line after each row
        printf("\n");
    }
    
    return 0;
}
