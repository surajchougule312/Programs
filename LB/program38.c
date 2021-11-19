//no from user reverse that number


#include<stdio.h>
#include<stdbool.h>

bool ChechPallindrome(int);

int main()
{
	int iValue=0;
	bool bRet=false;
	printf("Enter Number\n");
	scanf("%d",&iValue);

	bRet=ChechPallindrome(iValue);
	if(bRet==true)
	{
		printf("Number is Palendrom Number\n");
	}
	else
	{
		printf("Number is not pallindrome number");
	}
	
	//printf("Revese number is %d",iRet);
	return 0;
}

bool ChechPallindrome(int iNo)
{
	int iTemp=iNo;
	int iDigit=0;
	int iRev=0;
	while(iNo!=0)
	{
		iDigit=iNo%10;
		//printf("%d\n",iDigit);
		iRev=(iRev*10)+iDigit;
		

		iNo=iNo/10;
	}
	if(iRev==iTemp)
	{
		return true;
	}
	else
	{
		return false;
	}
}