//Write a program to calculate the factorial of a number.

#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1;

    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Error check for negative numbers
    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        // Loop to calculate factorial
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }

    return 0;
}

