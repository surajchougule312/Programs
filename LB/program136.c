#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(UINT iNo,UINT iPos)
{
	UINT iResult=0;
	UINT iMask=0x00000001;
	if((iPos<1)||(i>32))
	{
		
	}
	iMask=iMask<<(iPos-1);
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
	UINT iValue=0,iBit=0;
	bool bRet=false;
	printf("Enter number\n");
	scanf("%d",&iValue);
	printf("Enter position\n");
	scanf("%d",&iBit);

	bRet=CheckBit(iValue,iBit);
	if(bRet==true)
	{
		printf("bit is ON\n");
	}
	else
	{
		printf("bit is OFF\n");
	}
	
	return 0;
}
