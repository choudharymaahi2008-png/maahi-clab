#include <stdio.h>

int main() {
    int num, i;

    // Prompt the user for input
    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1 || num <= 0) {
        printf("Error: Please enter a valid positive integer.\n");
        return 1;
    }

    printf("Factors of %d are: ", num);

    // Loop through all numbers from 1 to num
    for (i = 1; i <= num; ++i) {
        // If num is perfectly divisible by i, then i is a factor
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
