#include <stdio.h>

// Helper function to print a single star across a specific number of continuous lines
void print_star_lines(int count) {
    for (int i = 0; i < count; i++) {
        printf("*\n");
    }
    // Print a blank line (gap) after the group is done
    printf("\n");
}

int main() {
    // Print the sequence: 1, 3, 5, 3, 1 lines of single stars
    print_star_lines(1);
    print_star_lines(3);
    print_star_lines(5);
    print_star_lines(3);
    print_star_lines(1);

    return 0;
}
