#include<stdio.h>
void add(int,int);
void sub(int,int);
void mul(int,int);
void div(int,int);
int main()
{
	int a,b,ch,n;
	do{
		printf("Enter your choice:\n1)Addition\n2)Substraction\n3)Multiplication\n4)Division\n");
		scanf("%d",&ch);
		printf("Enter two numbers a & b: ");
		scanf("%d%d",&a,&b);
		switch(ch)
		{
		case 1:
		add(a,b);
        break;
		case 2:
		sub(a,b);
        break;
        
		case 3:
		mul(a,b);
        break;
		case 4:
		div(a,b);
		break;
		default:
		printf("Incorrect choice");
	    }
		printf("\nDo you want to continue (1|0)");
		scanf("%d",&n);
		} 
		while(n==1);
		return 0;
}
    void add(int x,int y)
    {
    	int ans;
    	ans=x+y;
    	printf("\nAddition= %d",ans);
    }
	void sub(int x,int y)
	{   
	    int ans;
	    ans=x-y;
	    printf("\nSubstraction= %d",ans);
	}
	void mul(int x, int y)
	{
		int ans;
		ans=x*y;
		printf("\nMultiplication= %d",ans);
	}
	void div(int x,int y)
	{
		int ans;
		ans=x/y;
        printf("\nDivision= %d",ans);		
	}
