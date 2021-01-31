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
	printf("\nElements of array before inserstion: ");
	for(i=0;i<n;i++)
	{
	printf("\n%d",a[i]);
	}
	printf("\nEnter the position of insertion: ");
	scanf("%d",&p);
	printf("\nEnter a value to be insert: ");
	scanf("%d",&v);
	for(i=n-1;i>=p-1;i--)
	a[i+1]=a[i];
	a[p-1]=v;
	printf("\nThe new array is:\n");
	for(i=0;i<=n;i++)
	{
	printf("%d\n",a[i]);
	}
	return 0;
}
