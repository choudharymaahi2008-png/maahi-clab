#include <stdio.h>
#include <math.h>

int main() {
    int num, swappedNum;
    int firstDigit, lastDigit, digitsCount, divisor;

    // Get input from the user
    printf("Enter any number: ");
    scanf("%d", &num);

    // Get the last digit
    lastDigit = num % 10;

    // Calculate total number of digits minus 1
    digitsCount = (int)log10(num);

    // Calculate the divisor needed to extract the first digit
    divisor = (int)pow(10, digitsCount);

    // Get the first digit
    firstDigit = num / divisor;

    // Build the swapped number step-by-step
    swappedNum = lastDigit * divisor;     // Place last digit at the front
    swappedNum += num % divisor;          // Add the middle part of the original number
    swappedNum -= lastDigit;              // Remove the old last digit from the end
    swappedNum += firstDigit;             // Append the old first digit to the end

    // Print the results
    printf("Original number = %d\n", num);
    printf("Number after swapping first and last digit = %d\n", swappedNum);

    return 0;
}
