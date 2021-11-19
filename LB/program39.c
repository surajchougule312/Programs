//no from user reverse that number
#include<stdio.h>
#include<stdbool.h>

int Reverse(int);
bool CheckPallindrome(int);
int main()
{
	int iValue=0;
	bool bRet=false;
	printf("Enter Number\n");
	scanf("%d",&iValue);

	bRet=CheckPallindrome(iValue);
	if(bRet==true)
	{
		printf("Number is Pallindrome NUmber");
	}
	else
	{
		printf("Number is not Pallindrome");
	}

	//printf("Revese number is %d",iRet);
	return 0;
}

int Reverse(int iNo)
{
	
	int iDigit=0;
	int iRev=0;
	while(iNo!=0)
	{
		iDigit=iNo%10;
		
		iRev=(iRev*10)+iDigit;
		iNo=iNo/10;
	}
	return iRev;

}

bool CheckPallindrome(int iInput)
{
	int iNumber=0;
	iNumber=Reverse(iInput);
	if(iNumber==iInput)
	{
		return true;
	}
	else
	{
		return false;
	}
}
