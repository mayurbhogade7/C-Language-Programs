#include<stdio.h>
int main()
{int a,b;
printf("Enter two numbers a & b:");
scanf("%d%d",&a,&b);
printf("\nBefore swapping a=%d b=%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\nAfter swapping a=%d b=%d",a,b);
return 0;
}
