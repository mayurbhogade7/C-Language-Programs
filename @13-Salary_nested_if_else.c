#include<stdio.h>
int main()
{
char g;
int qua,yos,sal=0;
printf("enter the gender(male=m,female=f),years of service,qualifications(0=graduate,1=post graduate=)\n");
scanf("%c%d%d",&g,&yos,&qua);
if(g=='m'&&yos>=10&& qua==1)
sal=15000;
else if((g=='m'&&yos>=10&& qua==0)||(g=='m'&&yos<10&& qua==1))
sal=10000;
else if(g=='m'&&yos<10&& qua==1)
sal=7000;
else if(g=='f'&&yos>=10&& qua==1)
sal=12000;
else if(g=='f'&&yos>=10&& qua==0)
sal=9000;
else if(g=='f'&&yos<10&& qua==1)
sal=10000;
else if(g=='f'&&yos<10&& qua==0)
sal=6000;
printf("salaray of employee=%d",sal);
return 0;
}

