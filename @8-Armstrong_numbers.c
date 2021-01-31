#include<stdio.h>
int main()
{
int n1,a,n,rem=0;
printf("Enter a number:");
scanf("%d",&n);
n1=n;
while(n>0)
{
a=n%10;
rem=rem+a*a*a;
n=n/10;
}
if(rem==n1)
{
printf("Armstrong no.=%d",rem);
}
else
printf("NO. is not armstrong");
return 0;
}
