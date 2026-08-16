
// write a program to input two numbers and display their sum,difference, product, and quotient.

#include <stdio.h>
int main(){
int num1;
int num2;
int sum, difference, product, quotient;
printf("Enter 1st number:\n ");
scanf("%d",&num1);

printf("Enter 2nd number: \n ");
scanf("%d", &num2);
//  perform arithmetic  operations

 sum= num1+num2;
 difference = num1-num2;
 product= num1*num2;

printf("%d\n",sum);
printf("%d\n", difference);
printf("%d\n",product);

if (num2 != 0)
{
int quotient = num1/num2;
printf(" quotient: %d\n" , quotient);
}
else{
printf("quotient : cannot divided by zero\n");
}

return 0;

}

