#include<stdio.h>
int main()
{
int a,rem=0,n;
printf("Enter a number: ");
scanf("%d",&n);
while(n>0)
{ a=n%10;
rem=rem*10+a;
n=n/10;
}
printf("Reverse no.= %d",rem);
return 0;
}

