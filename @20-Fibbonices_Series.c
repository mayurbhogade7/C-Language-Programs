#include<stdio.h>
int main()
{
int old=0,new1=1,ans=0,i;
printf("old= %d new1= %d Fibbonices series: ",old,new1);
for(i=0;i<20;i++)
{
ans=old+new1;
printf("\t%d",ans);
old=new1;
new1=ans;
}
return 0;
}

