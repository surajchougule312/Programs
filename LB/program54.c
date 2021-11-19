#include<stdio.h>

int Count (int iNo1)
{
	int iCnt=0;
	int iDigit=0;
	while(iNo1>0)
	{
		iDigit=iNo1%10;
		if(iDigit>=5)
		{
			iCnt++;
		}
		iNo1=iNo1/10;
	}
	return iCnt;
}

int main()
{
	int iValue1=0;
	int iRet=0;
	printf("Enter number\n");
	scanf("%d",&iValue1);

	
	
	iRet=Count(iValue1);
	printf("Digits gretter than 5 are :%d",iRet);
	return 0;
}