
//WAP which accept number from user and display
// its factors in decreasing order.

#include<stdio.h>

void Factrev(int iNo)
{
	int i=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	//iNo=iNo-1;
	for(i=iNo-1;i>=1;i--)
	{
		if(iNo%i==0)
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
	Factrev(iValue);
	return 0;
}

