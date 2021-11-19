#include<stdio.h>
void display(int);	// declaration
int main()
{
	int iValue=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	display(iValue);   // function call
	return 0;

}
void display(int iNo)		//defination
{
	int i=0;
	for(i=1;i<=iNo;i++)
	{
		printf("Marvellous\n");
	}
}

