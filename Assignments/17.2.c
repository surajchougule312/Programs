
/*Accept N numbers from user and return difference between frequency of
even number and odd numbers.
Input : N : 7

Elements :85 66 3 80 93 88 90

Output : 1 (4 -3)*/

#include<stdio.h>
#include<stdlib.h>
int Frequency(int*, int);
int main()
{
	int *p=NULL;
	int iLength=0, iRet=0,iCnt=0;
	printf("Enter number of elements:\n");
	scanf("%d",&iLength);
	p=(int*)malloc(sizeof(int)*iLength);
	printf("Enter elements:\n");
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	iRet=Frequency(p,iLength);
	printf(" %d\n",iRet);
	free(p);
	return 0;
}
int Frequency(int Arr[],int iSize)
{
	int i=0,iEven=0,iOdd=0;
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]%2==0)
		{
			iEven++;
		}
		else
		{
			iOdd++;
		}
	}
	return iEven-iOdd;
}