//Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>
int main()
{
// n= natural number
int n, sum=0;
printf("enter n : \n");
scanf("%d" , &n);
 
for(int i=1; i<=n; i++)
{
sum = sum +i;
}
printf("the sum of first %d  natural numbers  is : %d ",n, sum);

return 0;
}

