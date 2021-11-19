#include<stdio.h>
//typedef 1000Gram  Kilo
typedef unsigned long int UINT;

unsigned long int Factorial( int);
int main()
{
	int iNo=0;
    UINT iRet=0;
	
	printf("Enter Number\n");
	scanf("%d",&iNo);
	
	iRet=Factorial(iNo);
	
	printf("Factorial is : %ld",iRet);
	
	return 0;
}

UINT Factorial(int iValue)		
{
	 UINT iFact=1;
	int iCnt=0;
	if(iValue<0)// Updator
	{
		iValue=-iValue;
		
	}
	//		1			2				3
	for(iCnt=1;iCnt<=iValue;iCnt++)
	{
		iFact=iFact*iCnt;	//4
	}
	return iFact;
}