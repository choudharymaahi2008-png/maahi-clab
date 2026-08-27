// write a program to take a number as input and print its equivalent binary representation.

// decimal to binary 
#include <stdio.h>
int main() 
{
int n, rem=0, binary[100], i=0;
printf("enter the decimal number: ");
scanf("%d", &n);

if(n==0){

printf("the binary equivalent is 0");
}
else{
while(n>0)
{
rem = n%2;
binary[i] = rem;
i++;
n= n/2;
}
printf("binary is");
for(int j=i-1; j>=0;j--){
printf("%d" , binary[j]);
}
}
return 0;
}

