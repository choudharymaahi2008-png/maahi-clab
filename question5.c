//write a program to convert temperature from celsuis to fahrenheit

#include<stdio.h>
int main()
{
float celsius, fahrenheit;
printf("enter temperature in celsuis:  ");
scanf("%f", &celsius);

fahrenheit = (celsius* 9/5) + 32;
printf("after conversion : %.2f\n", fahrenheit);

return 0;
}

