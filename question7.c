// Write a program to swap two numbers without using a third variable.

#include <stdio.h>
int main()
{
int a,b;
 a = 5;
 b = 10;
 

a= a+b;
b= a-b;
a = a-b;

printf("new value of a is: %d\n", a );
printf(" new value of b is: %d\n", b);

return 0;
}


