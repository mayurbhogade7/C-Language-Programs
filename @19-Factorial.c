#include<stdio.h>
long int factorial(int);
int main()
{
int n;
printf("Enter a Number: ");
scanf("%d",&n);
printf("Factorial of %d=%ld",n,factorial(n));
return 0;
}
long int factorial(int x)
{
if(x>=1)
{
return (x*factorial(x-1));
}
else
return 1;
}
