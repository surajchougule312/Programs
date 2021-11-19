/**/


#include<stdio.h>
#include<stdlib.h>
//int Addition(int *Brr)
int Addition(int Brr[],int iSize)
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
	int *Arr=NULL;
	int iLength=0;	
	printf("Enter Number of elements\n");
	scanf("%d",&iLength);
	Arr=(int*)malloc(sizeof(int)*iLength);
	int iCnt=0,iRet=0;
	printf("Enter numbers: \n");
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}
	iRet=Addition(Arr,iLength);	//Addition(100);
	printf("Addition is %d",iRet);

	free(Arr);
	return 0;
}