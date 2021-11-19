
//WAP which accept number from user and check whether it 
//contains 0 in it or not.

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL ChkZero(int iNo)
{
	int iDigit=0;
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit==0)
		{
			return TRUE;
		}
		iNo=iNo/10;
	}
}
int main()
{
	int iValue=0;
	BOOL  bRet=FALSE;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	bRet=ChkZero(iValue);

	if(bRet==TRUE)
		{
			printf("It contains zeroo");
		}
		else
		{
			printf("There is no zero ");
		}
	return 0;
}