// Write a program to input an integer and check whether it is even or odd using if–else

#include <stdio.h>
int main()
 {
 int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
 // Check if the remainder is 0
    if (num % 2 == 0)
{
  printf("this is an even number: %d\n", num);
    }
 else
 {
        printf("this is an odd number : %d\n", num);
    }
    return 0;
}
