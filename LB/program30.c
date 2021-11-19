#include<stdio.h>
int display(int);
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter Number");
	scanf("%d",&iValue);
	iRet=display(iValue);
	printf("Addition of Digits:%d",iRet);
	return 0;
}
int display(int iNo)
{

	
	int iDigit=0;
	int iSum=0;
	if(iNo<0)
	{
		iNo=-iNo;	//input Updator
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		iSum=iSum+iDigit;
		iNo=iNo/10;
		

	}
	return iSum;
}