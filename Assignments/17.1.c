
/*Accept N numbers from user and return frequency of even numbers.
Input : N : 6

Elements :85 66 3 80 93 88

Output : 3*/

#include<stdio.h>
#include<stdlib.h>
int CountEven(int*,int);
int main()
{
	int *p=NULL;
	int iLength=0;
	int iCnt=0,iRet=0;
	printf("Enter Number of elemnts:\n");
	scanf("%d",&iLength);
	p=(int*)malloc(sizeof(int)*iLength);
	printf("Enter elements:\n");
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	iRet=CountEven(p,iLength);
	printf("Frequency of even number: %d",iRet);
	free(p);
	return 0;
}
int CountEven(int Arr[], int iSize)
{
	int i=0,iSum=0;
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]%2==0)
		{
			iSum++;
		}
		//iSum=Arr[i];
		
	}
	return iSum;
}