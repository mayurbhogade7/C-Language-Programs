#include<stdio.h>
int main()
{
int a,rem=0,n,n1;
printf("Enter a number: ");
scanf("%d",&n);
n1=n;
while(n>0)
{ a=n%10;
rem=rem*10+a;
n=n/10;
}
if(n1==rem)
{
printf("Pallimdrom no.= %d",rem);
}else
printf("Reverse no.= %d",rem);
return 0;
}

