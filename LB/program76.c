/*accept 5 numbers from user and perform addition*/


#include<stdio.h>
//int Addition(int *Brr)
int Addition(int *Brr,int iSize)
{
	int iSum=0,iCnt=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		iSum=iSum+Brr[iCnt];
	}
	return iSum;
}

int main()
{
	int Arr[5];	
	int iCnt=0,iRet=0;
	printf("Enter numbers: \n");
	
	for(iCnt=0;iCnt<5;iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}
	iRet=Addition(Arr,5);	//Addition(100);
	printf("Addition is %d",iRet);
	return 0;
}