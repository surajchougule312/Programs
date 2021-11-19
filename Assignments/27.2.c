
/*Write a program which checks whether 5th & 18th bit is On or OFF.*/

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool CheckBit(UINT iNo)
{
	UINT iResult=0;
	UINT iMask=0x00020010;
	iResult=iMask&iNo;
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
		printf("5th and 18th bit is on\n");
	}
	else
	{
		printf("5th and 18th bit is off\n");
	}
	return 0;

}