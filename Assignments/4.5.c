
//WAP which accept number from user and return difference
// between summetion of all its factors and non factors.


#include<stdio.h>

int  NonFact(int iNo)
{
	int i=0;
	int iTemp=0;
	int iTemp2=0;
	int iDiff=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(i=1;i<iNo;i++)
	{
		if(iNo%i==0)
		{
			iTemp=iTemp+i;
			//printf("%d\t",iTemp);
		}
		else
		{
			iTemp2=iTemp2+i;
			//printf("%d\t",iTemp2 );
		}
	}
	iDiff=iTemp-iTemp2;
	return iDiff;
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