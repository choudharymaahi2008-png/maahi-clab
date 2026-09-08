#include <stdio.h>

int main() {
    int n, is_prime;

    // Get user input for the upper limit
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n", n);

    // Loop through all numbers from 2 to n (1 is skipped as it is not prime)
    for (int i = 2; i <= n; i++) {
        is_prime = 1; // Assume the number is prime initially

        // Check if 'i' is divisible by any number from 2 up to its square root
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = 0; // Found a divisor, so it's not prime
                break;        // Exit the inner loop early
            }
        }

        // If is_prime is still 1, the number is prime
        if (is_prime == 1) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    return 0;
}

