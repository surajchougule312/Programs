//WAP which accept number from user and return multiplication
//of all digits

//when number include 0 digit program not working.


#include<stdio.h>

int  CountTwo(int iNo)
{
	int iDigit=0;
	int iTemp=1;
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iTemp=iTemp+(iTemp*iDigit);
		//iTemp=iTemp+(iTemp*iDigit);
		iNo=iNo/10;
	}
	//iTemp++;
	return iTemp;
}
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	iRet=CountTwo(iValue);

	printf("%d",iRet);
	return 0;
}