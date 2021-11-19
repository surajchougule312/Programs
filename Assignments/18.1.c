
/*Accept N numbers from user and accept one another number as NO ,
check whether NO is present or not.

Input : N : 6
NO: 66
Elements :85 66 3 66 93 88

Output : TRUE
Input : N : 6
NO: 12
Elements :85 11 3 15 11 111

Output : FALSE*/

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Check(int*,int,int);
int main()
{
	int *p=NULL;
	int iLength=0,NO=0,iCnt=0;
	BOOL bRet=FALSE;
	printf("Enter number of elements\n");
	scanf("%d",&iLength);
	printf("Enter NO:\n");
	scanf("%d",&NO);
	p=(int*)malloc(sizeof(int)*iLength);
	if(p==NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	printf("Enter elements\n");
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	bRet=Check(p,iLength,NO);
	if(bRet==TRUE)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
	free(p);
	return 0;
}
BOOL Check(int Arr[],int iSize, int no)
{
	int i=0;
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]==no)
		{
			return TRUE;
		}
	}
}