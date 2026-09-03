#include <stdio.h>

// Function to find the HCF/GCD using the Euclidean Algorithm
int findHCF(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main() {
    int num1, num2, hcf;

    // Taking user input
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Call function to calculate HCF
    hcf = findHCF(num1, num2);

    // Output the result
    printf("The HCF (GCD) of %d and %d is: %d\n", num1, num2, hcf);

    return 0;
}
