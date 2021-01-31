#include<stdio.h>
int main()
{
	int i,j,a[3][3];
	printf("Enter the values of matrix: ");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	scanf("%d",&a[i][j]);
	}
	}
	printf("\nThe matrix before it becomes Transpose:\n");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	printf("%d\t",a[i][j]);
	}
	printf("\n");
	}
	printf("\nThe Transpose of matrix is:\n");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
 	printf("%d\t",a[j][i]);
	}
	printf("\n");
	}
	return 0;
}
