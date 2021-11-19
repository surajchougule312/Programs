#include<stdio.h> 
 
int devide(int iNo1,int iNo2)
{
	int iAns;
	if(iNo2<0)
	{
		return -1;
	}
	iAns=iNo1/iNo2;
	return iAns;
}
int main()
{
	int iValue1=15;
	int iValue2=3;
	int iRet=0;
	iRet=devide(iValue1,iValue2);
	printf("Devision is %d",iRet);
	return 0;
}