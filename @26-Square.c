#include<stdio.h>
int square(int);
int main()
{
	int A,ans;
	printf("Enter a number A: ");
	scanf("%d",&A);
	ans=square(A);
	printf("Square=%d",ans);
	return 0;
}
square(int a)
{
	int C;
	C=a*a;
	return(C); 
}
