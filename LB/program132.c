#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
	UINaT iResult=0;
	UINT iMask=0x00000008;
	iResult=iNo&iMask;
	
	if(iMask==iResult)
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
		printf("4th bit is ON\n");
	}
	else
	{
		printf("4th bit is OFF\n");
	}
	
	return 0;
}
