
/*Accept N numbers from user and return frequency of 11 form it.
Input : N : 6

Elements :85 66 3 15 93 88

Output : 0
Input : N : 6

Elements :85 11 3 15 11 111

Output : 2*/

#include<stdio.h>
#include<stdlib.h>
int Frequency(int*,int);
int main()
{
	int *p=NULL;
	int iLength=0,iCnt=0,iRet=0;
	printf("Enter number of elements\n");
	scanf("%d",&iLength);
	p=(int *)malloc(sizeof(int)*iLength);
	printf("Enter numbers:\n");
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	iRet=Frequency(p,iLength);
	printf("\n%d\n",iRet);
	free(p);
	return 0;
}
int Frequency(int Arr[], int iSize)
{
	int i=0,iTemp=0;
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]==11)
		{
			iTemp++;
		}
	}
	return iTemp;
}
