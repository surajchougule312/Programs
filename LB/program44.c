#include<stdio.h>
int Power(int,int);
int main()
{
	int iValue1=0,iValue2=0;
	int iRet=0;
	printf("Enter two numbers Number\n");
	scanf("%d%d",&iValue1,&iValue2);
	iRet=Power(iValue1,iValue2);
	printf("power of number is %d\n",iRet );
	return 0;

}
int Power(int iNo1, int iNo2)
{
	int iCnt=0;
	int iMult=1;
	for(iCnt=1;iCnt<=iNo2;iCnt++)
	{
		iMult=iMult*iNo1;
	}
	return iMult;
}