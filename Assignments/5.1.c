
//WAP which accept number from user and display
//its digits in reverse order.

#include<stdio.h>

int Reverse(int);

int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter Number\n");
	scanf("%d",&iValue);

	iRet=Reverse(iValue);
	
	printf("Revese number is %d",iRet);
	return 0;
}

int Reverse(int iNo)
{
	
	int iDigit=0;
	int iRev=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		printf("%d\n",iDigit);
		iRev=(iRev*10)+iDigit;
		iNo=iNo/10;
		//iRev=(iRev*10)+iDigit; we can alo write here this sysntax output will be the same
	}
	return iRev;

}