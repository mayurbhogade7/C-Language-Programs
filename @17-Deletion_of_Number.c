#include<stdio.h>
int main()
{
	int i,j,a[100],n,p,v;
	printf("Enter the number of elements of arrays: ");
	scanf("%d",&n);
	printf("\nEnter the elements of array: ");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("\nElements of array before deletion: ");
	for(i=0;i<n;i++)
	{
	printf("\n%d",a[i]);
	}
	printf("\nEnter the position to delete: ");
	scanf("%d",&p);
	for(i=p-1;i<n-1;i++)
	a[i]=a[i+1];
	printf("\nThe new array is: ");
	for(i=0;i<n-1;i++)
	{
	printf("%d\n",a[i]);
	}
	return 0;
}
