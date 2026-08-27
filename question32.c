//Write a program to check if a number is a palindrome.
// eg: 121 when gets reverse it will be same
#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, remainder;


    printf("Enter an integer: ");
    scanf("%d", &num);

   
    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Check if the original number matches the reversed number
    if (originalNum == reversedNum)
 {
        printf("%d is a palindrome.\n", originalNum);
    }
 else
 {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}

