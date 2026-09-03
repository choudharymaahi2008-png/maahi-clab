#include <stdio.h>

int main() {
    long long num;
    int product = 1;
    int hasOdd = 0; // To check if any odd digit exists

    printf("Enter a number: ");
    scanf("%lld", &num);

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    // Handle the case when number is 0
    if (num == 0) {
        if ((num % 10) % 2 != 0) {
            product = 0; // 0 is even, but if input is just 0, product of odd is none
        }
        hasOdd = 0;
    }

    long long temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        if (digit % 2 != 0) {
            product *= digit;
            hasOdd = 1;
        }
        temp /= 10;
    }

    if (hasOdd) {
        printf("Product of odd digits: %d\n", product);
    } else {
        printf("No odd digits found in the number.\n");
    }

    return 0;
}
