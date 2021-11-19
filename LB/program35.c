//accept no from user even digits chiaddtion

//Print Number of even digits 

#include<stdio.h>
int SumEven(int);
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter Number");
	scanf("%d",&iValue);
	iRet=SumEven(iValue);
	printf("Addition  of Even  Digits:%d",iRet);
	return 0;
}
int SumEven(int iNo)
{

	int iDigit=0;
	int iCnt=0;
	int iSum=0;
	
	if(iNo<0)
	{
		iNo=-iNo;	//input Updator
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit %2==0)
		{
			//iCnt++;	//iCnt=iCnt+1
			iSum=iSum+iDigit;
		}

		iNo=iNo/10;
	}
	return iSum;
}