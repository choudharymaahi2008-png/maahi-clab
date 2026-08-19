// Write a program to calculate simple and compound interest for given principal, rate, and time.


#include <stdio.h>
#include <math.h>
int main()
{
// SI stands for simple interest , CI stands for compound interest
int SI, CI,  p, r,t;
printf("enter principal value :\n ");
printf("enter rate:\n ");
printf("enter time: \n" );
 
SI = (p*r*t)/100;
CI = p* pow(1+r/100,t)-p;

printf("simple interest is: %d\n", SI);
printf("compound interest is: %d \n" , CI);

return 0;
}

