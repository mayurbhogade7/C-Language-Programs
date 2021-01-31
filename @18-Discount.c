#include<stdio.h>
int main()
{int q,d=0,r;
float total;
printf("Enter quantity and rate:");
scanf("%d%d",&q,&r);
if(q<1000)
{d=10;
printf("\nYou are eligible discount");
 total=(q*r)-(q*r/10);
 printf("\ntotal amount to paid=%f",total);
 }
 else
 {printf("\nyou are not eligible for discount");
 total=q*r;
 printf("\ntotal amount to paid=%f",total);
 }
 return 0;
 }



