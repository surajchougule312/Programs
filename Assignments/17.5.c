
/*Accept N numbers from user and accept one another number as NO ,
return frequency of NO form it.

Input : N : 6
NO: 66
Elements :85 66 3 66 93 88

Output : 2
Input : N : 6
NO: 12
Elements :85 11 3 15 11 111

Output : 0*/

#include<stdio.h>
#include<stdlib.h>
int Frequency(int*,int ,int);
int main()
{
	int *p;;
	int iLength=0,NO=0,iCnt=0,iRet=0;
	printf("Enter number of elements\n");
	scanf("%d",&iLength);
	printf("Enter value of NO:\n");
	scanf("%d",&NO);
	p=malloc(sizeof(int)*iLength);
	printf("Enter elements:");
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	iRet=Frequency(p,iLength,NO);
	printf("\n%d\n",iRet);
	free(p);
	return 0;
}
int Frequency(int Arr[],int iSize, int no)
{
	int i=0,iTemp=0;
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]==no)
		{
			iTemp++;
		}
	}
	return iTemp;
}