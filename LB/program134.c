#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
	UINT iResult=0;
	UINT iMask=0x00000840;// 0000 0000 0000 0000  0000 1000 0100 0000
						//   0      0    0   0     0    8    4     0   
						//0x00000840
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
		printf("7th and 12 bit is ON\n");
	}
	else
	{
		printf("7th and 12  bit is OFF\n");
	}
	
	return 0;
}
