
/*  Write a program which accept renge from user and
return addition of all numbers in between that renge.
(renge should be positive numbers only)*/
//integer overflow chi condition fullfill nahi zhali ajun.

#include<stdio.h>

int RengeSum(int, int);
int main()
{
	int iValue1=0;
	int iValue2=0;
	int iRet=0;
	printf("Enter Start NUmber\n");
	scanf("%d",&iValue1);
	
	printf("Enter End Number\n");
	scanf("%d",&iValue2);
	
	
	iRet=RengeSum(iValue1,iValue2);
	printf("Addition is  %d\n",iRet );

	return 0;
}

int  RengeSum(int iNo1, int iNo2)
{
	int iCnt=0;
	int iSum=0;
	if(iNo1<=0)
	{
		printf("Invalid Input  ");
		return 0;
	}
	if(iNo2<=0)
	{
		printf("Invalid Input  ");
		return 0;
	}
	for(iCnt=iNo1;iCnt<=iNo2;iCnt++)
	{
		iSum=iSum+iCnt;
	}
	return iSum;
}