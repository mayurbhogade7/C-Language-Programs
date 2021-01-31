#include<stdio.h>
int main()
{int a,b,c;
printf("Enter two numbers a & b");
scanf("%d%d",&a,&b);
printf("\nBefore swapping a=%db=%d",a,b);
c=a;
a=b;
b=c;
printf("\nAfter swapping a=%db=%d",a,b);
return 0; 
}
