#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
	UINT iResult=0;
	UINT iMask=0x0000000f;// 0000 0000 0000 0000  0000 0000 0000 1111
						//   0      0    0   0     0    0    0    15   
						//0x0000000f
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
		printf("first four bis are ON\n");
	}
	else
	{
		printf("first four bits are OFF\n");
	}
	
	return 0;
}
