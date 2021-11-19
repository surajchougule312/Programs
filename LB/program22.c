#include<stdio.h>		// For printf and scan
#include<stdbool.h>		//For bool Datatype
bool CheckEven(int);
int main()
{
	int iNo=0;
	bool bRet=false;
	printf("Enter NUmber\n");
	scanf("%d",&iNo);
	bRet=CheckEven(iNo);
	if(bRet==true)
	{
		printf("%d is Even Number",iNo);
	}
	else
	{
		printf("%d is not Even Number",iNo);
	}

	
	return 0;
}
bool CheckEven(int iValue)
{
	if((iValue%2)==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}