#include<stdio.h>
void display(int);
int main()
{
	int iNo=0;
	printf("Enter Number\n");
	scanf("%d",&iNo);
	display(iNo);
	return 0;
}

void display(int iValue)		//defination
{
	int i;
	for(i=iValue;i>=1;i--)
	{
		printf("%d\n",i);
	}
}