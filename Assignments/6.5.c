//WAP which accept number from user and return difference
//between summation of even digits and summation of odd digits.

#include<stdio.h>

int  CountDiff(int iNo)
{
	int iDigit=0;
	int iTemp=0;
	int iTemp2=0;
	int iDiff=0;
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit%2==0)
		{
			iTemp=iTemp+iDigit;
			
		}
		else
		{
			iTemp2=iTemp2+iDigit;
		}
		iNo=iNo/10;
		iDiff=iTemp-iTemp2;
	}
	return iDiff;
}
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	iRet=CountDiff(iValue);

	printf("%d",iRet);
	return 0;
}