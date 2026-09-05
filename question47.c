#include <stdio.h>

int main() {
    int total_groups = 5;
    int stars_per_group = 5;

    // Loop through each of the 5 groups
    for (int i = 0; i < total_groups; i++) {
        
        // Loop to print 5 stars inside the current group
        for (int j = 0; j < stars_per_group; j++) {
            printf("*");
        }
        
        // Print a space after each group except the very last one
        if (i < total_groups - 1) {
            printf(" ");
        }
    }
    
    // Print a newline at the end of the output
    printf("\n");

    return 0;
}
