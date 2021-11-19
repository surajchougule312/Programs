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
	if(iNo==0)
	{
		printf("You entered zero");
		return;
	}
	if(iNo<0)		//Input Updator
	{
		iNo=-iNo;
	}
	int i=0;
	for(i=1;i<=iNo;i++)
	{
		printf("%d\n",i);
	}
}

