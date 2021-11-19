
//WAP which accept number from user and display its
//multiplication of factors.

#include<stdio.h>

int MultFact(int iNo)
{
	int i=0;
	int iTemp=1;
	for(i=1;i<iNo;i++)
	{
		if(iNo%i==0)
		{
			iTemp=iTemp*i;
		}

	}
	return iTemp;
}


int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter Number\n");
	scanf("%d",&iValue);
	iRet=MultFact(iValue);
	printf("%d",iRet);
	return 0;
}