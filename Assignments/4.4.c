
//WAP which accept number from user and return summation
//of all non factors.


#include<stdio.h>

int  NonFact(int iNo)
{
	int i=0;
	int iTemp=0;
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
			iTemp=iTemp+i;
		}
	}
	return iTemp;
}

int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter NUmber\n");
	scanf("%d",&iValue);
	iRet=NonFact(iValue);
	printf("%d\n",iRet);
	return 0;
}