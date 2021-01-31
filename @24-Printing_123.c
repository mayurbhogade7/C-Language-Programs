#include<stdio.h>
int main()
{int i,j,k;
int ch=1;
printf("Enter a number:");
scanf("%d",&k);
for(i=0;i<k;i++)
{
for(j=0;j<=i;j++)
{
printf("%d\t",ch);
ch++;
}
printf("\n");
}
return 0;
}

