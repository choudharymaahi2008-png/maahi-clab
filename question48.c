//Write a program to print the following pattern:
//1
//12
//123
//1234
//12345
#include <stdio.h>

int main() {
    int i, j;

    // Outer loop for the number of rows
    for (i = 1; i <= 5; i++) {
        // Inner loop to print numbers from 1 up to the current row number
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Print a space after each row's numbers
        printf(" ");
    }

    return 0;
}
