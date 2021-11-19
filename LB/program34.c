//Print Number of even digits 

#include<stdio.h>
int CountEven(int);
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter Number");
	scanf("%d",&iValue);
	iRet=CountEven(iValue);
	printf("Number of Even  Digits:%d",iRet);
	return 0;
}
int CountEven(int iNo)
{

	int iDigit=0;
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
		iDigit=iNo%10;
		if(iDigit %2==0)
		{
			iCnt++;	//iCnt=iCnt+1
		}

		iNo=iNo/10;
	}
	return iCnt;
}