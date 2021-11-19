
//WAP which accept number from user and display
//all its nin factors.

#include<stdio.h>

void NonFact(int iNo)
{
	int i=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(i=1;i<iNo;i++)
	{
		if(iNo%i==0)
		{
			
		}
		else
		{
			printf("%d\t",i);
		}
	}
}

int main()
{
	int iValue=0;
	printf("Enter NUmber\n");
	scanf("%d",&iValue);
	NonFact(iValue);
	return 0;
}