//write  a program  to swap two numbers using a third variable.
#include <stdio.h>
int main()
{
int a,b,c;
a= 5;
b= 10;

c=a;
b=c;
a= b+c;

printf("New value of a is : %d\n " ,a);
printf("New value of b is : %d\n " ,b);

return 0;

}


