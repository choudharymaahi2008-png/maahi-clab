#include <stdio.h>

int main() {
    int num, is_prime = 1;

    // Ask user for input
    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Numbers less than or equal to 1 are not prime
    if (num <= 1) {
        is_prime = 0;
    } else {
        // Check for factors from 2 up to the square root of the number
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = 0; // Factor found, so it is not prime
                break;        // Exit loop early
            }
        }
    }

    // Print the result
    if (is_prime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
