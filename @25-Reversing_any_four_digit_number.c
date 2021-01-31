#include<stdio.h>
int main()
{int n,a,b,c,d;
printf("Enter any four digit number n:");
scanf("%d",&n);
printf("\nBefore reversing n=%d",n);
a=n%10;
n=n/10;
b=n%10;
n=n/10;
c=n%10;
n=n/10;
d=n%10;
printf("\nAfter reversing n=%d%d%d%d",a,b,c,d);
return 0;
}
