
/*Write a program which checks whether 15th bit is On or OFF.*/

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
	UINT iResult=0;
	UINT iMask=0x00008000;
	iResult=iNo&iMask;
	if(iResult==iMask)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	UINT iValue=0;
	bool bRet=false;
	printf("Enter number\n");
	scanf("%d",&iValue);
	bRet=CheckBit(iValue);
	if(bRet==true)
	{
		printf("15th nit is on\n");
	}
	else
	{
		printf("15th bit is off\n");
	}
	return 0;
}