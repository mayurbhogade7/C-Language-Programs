#include<stdio.h>
int main()
{int i,j,k;
printf("Enter a number:");
scanf("%d",&k);
for(i=0;i<k;i++)
{
for(j=0;j<=i;j++)
{
printf("* ");
}
printf("\n");
}
return 0;
}

