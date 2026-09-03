#include <stdio.h>

int main() {
    int num1, num2, n1, n2, temp, gcd, lcm;

    // Prompt user for input
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Save the original numbers for the final output
    n1 = num1;
    n2 = num2;

    // Calculate GCD using Euclidean algorithm
    while (num2 != 0) {
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    gcd = num1;

    // Calculate LCM using the formula: (n1 * n2) / GCD
    lcm = (n1 * n2) / gcd;

    // Display the result
    printf("The LCM of %d and %d is %d\n", n1, n2, lcm);

    return 0;
}
