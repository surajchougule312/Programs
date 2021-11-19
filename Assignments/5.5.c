
//WAP which accept number from user and count frequency of such
//digits which are less than 6.

#include<stdio.h>

int  Count(int iNo)
{
	int iDigit=0;
	int iTemp=0;
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit<6)
		{
			iTemp=iTemp+1;
		}
		iNo=iNo/10;
	}
	return iTemp;
}
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	iRet=Count(iValue);

	printf("%d",iRet);
	return 0;
}