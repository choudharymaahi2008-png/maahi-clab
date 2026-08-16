// write a program to calculate the area and circumference of a circle given its radius

#include <stdio.h>
int main()
{
int radius, area_circle, circumference;
radius = 5;
area_circle= 3.14*radius*radius;
circumference = 2*3.14*radius;

printf("the area of circle is: %d\n" , area_circle);
printf("the circumference of circle is: %d\n " , circumference);

return 0;
}

