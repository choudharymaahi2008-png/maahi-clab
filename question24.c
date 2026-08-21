//Write a program to calculate electricity bill based on units consumed with these rates: 
#include <stdio.h>

int main() {
    float units, bill_amount = 0;

    // Input the total units consumed
    printf("Enter total units consumed: ");
    scanf("%f", &units);

    // Validation for negative input
    if (units < 0) {
        printf("Invalid input. Units cannot be negative.\n");
        return 1;
    }

    // Calculate bill based on tiered rates
    if (units <= 100) {
        bill_amount = units * 5;
    } 
    else if (units <= 200) {
        bill_amount = (100 * 5) + ((units - 100) * 7);
    } 
    else if (units <= 300) {
        bill_amount = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    } 
    else {
        bill_amount = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
    }
    printf("Total Electricity Bill: ₹%.2f\n", bill_amount);

    return 0;
}
