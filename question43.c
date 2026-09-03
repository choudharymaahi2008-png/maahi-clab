#include <stdio.h>

// Function to calculate the factorial of a digit
long long getFactorial(int digit) {
    long long fact = 1;
    for (int i = 1; i <= digit; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, temp, remainder;
    long long sum = 0;

    // Prompt user for input
    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    temp = num;

    // Process each digit of the number
    while (temp > 0) {
        remainder = temp % 10;       // Extract the last digit
        sum += getFactorial(remainder); // Add its factorial to sum
        temp /= 10;                  // Remove the last digit
    }

    // Check if the calculated sum matches the original number
    if (sum == num && num > 0) {
        printf("%d is a Strong Number.\n", num);
    } else {
        printf("%d is NOT a Strong Number.\n", num);
    }

    return 0;
}
