#include <stdio.h>

int main() {
    int max_stars = 9; // Maximum number of stars at the peak row

    // 1. Upper Half: Growing from 1 star to 9 stars
    for (int i = 1; i <= max_stars; i += 2) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); // Move to the next line
    }

    // 2. Lower Half: Shrinking from 7 stars down to 1 star
    for (int i = max_stars - 2; i >= 1; i -= 2) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
