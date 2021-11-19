#include<stdio.h>
#include<stdlib.h>
int Maximum(int Arr[],int iLength)
{
	int i=0,iMax=Arr[0],iMin=Arr[0];
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]>iMax)
		{
			iMax=Arr[i];
		}
		else if(Arr[i]<iMin)
		{
			iMin=Arr[i];
		}
	}return iMax-iMin;
}
int main()
{
	int iSize=0,iRet=0,iCnt=0,iValue=0;
	int *p=NULL;
	printf("Enter number of elements\n");
	scanf("%d",&iSize);

	p=(int*)malloc(sizeof(int)*iSize);	
	printf("Enter elements\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	iRet=Maximum(p,iSize);
	printf("Maximum number is:%d",iRet);
	free(p);
	return 0;
}