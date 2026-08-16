// write a program to calculate the area and perimeter of a rectangle given its length and breadth
#include <stdio.h>
int main()
{
// l= length , b= breadth
int area,perimeter,l,b;
 l= 4;
 b= 5;

area= l*b;
perimeter = 2*(l+b);
printf("the area of rectangle is: %d\n", area);
printf("the perimeter of rectangle is : %d\n" , perimeter);
 return 0;
}

