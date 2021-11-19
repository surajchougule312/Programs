#include<stdio.h>
int CountDigit(int);
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter Number");
	scanf("%d",&iValue);
	iRet=CountDigit(iValue);
	printf("Number of Digits:%d",iRet);
	return 0;
}
int CountDigit(int iNo)
{

	int iCnt=0;
	if(iNo==0)	//filter
	{
		return 1;
	}
	if(iNo<0)
	{
		iNo=-iNo;	//input Updator
	}
	while(iNo>0)
	{
		
		iCnt++;	//iCnt=iCnt+1
		iNo=iNo/10;
		

	}
	return iCnt;
}