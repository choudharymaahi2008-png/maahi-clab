//Write a program to calculate library fine based on late days as follows: 

#include <stdio.h>

int main() {
    int days, fine = 0;

    printf("Enter the number of late days: ");
    if (scanf("%d", &days) != 1 || days < 0) {
        printf("Invalid input.\n");
        return 1;
    }

    if (days > 30) {
        printf("Membership Cancelled.\n");
    } else {
        if (days <= 5) {
            fine = days * 2;
        } else if (days <= 10) {
            fine = (5 * 2) + (days - 5) * 4;
        } else {
            fine = (5 * 2) + (5 * 4) + (days - 10) * 6;
        }
        printf("Total Fine: ₹%d\n", fine);
    }

    return 0;
}
