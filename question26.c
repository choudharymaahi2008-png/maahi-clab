//Write a program to print numbers from 1 to n.

#include <stdio.h>
int main()
{
int i,n;
printf("enter n:  ");
scanf("%d", &n);

printf("print numbers from 1 to %d :\n  ", n);

for(i=1; i<=n; i++)
{
printf("%d"\n , i);
}
printf("\n" );
return 0;
}

