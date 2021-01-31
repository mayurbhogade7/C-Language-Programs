#include<stdio.h>
int main()
{
	int roll_no,DD,MM,YYYY;
	int mobile_no[10];
	float marks;
	char name[30],qualification[25];
	printf("Enter name:");
	scanf("\t%s",name);
	printf("\nEnter roll no:");
	scanf("\t%d",&roll_no);
	printf("\nEnter mobile no:");
	scanf("\t%s",mobile_no);
	printf("\nEnter DOB:");
	scanf("\t%d%d%d",&DD,&MM,&YYYY);
	printf("\nEnter Qualification:");
	scanf("\t%s",qualification);
	printf("\nEnter marks:");
	scanf("\t%f",&marks);
	printf("++++++++++++++++++++------------------------********************************---------------------------+++++++++++++++++++++++++");
	printf("\nName=%s",name);
	printf("\nRoll no=%d",roll_no);
	printf("\nMobile no=%s",mobile_no);
	printf("\nDD=%d MM=%d YYYY=%d",DD,MM,YYYY);
	printf("\nQualification=%s",qualification);
	printf("\nmarks=%f",marks);
	return 0;
}
