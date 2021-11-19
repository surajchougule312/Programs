
/*Accept N numbers from user check whether that numbers contains 11 in
it or not.
Input : N : 6

Elements :85 66 11 80 93 88

Output : 11 is present
Input : N : 6

Elements :85 66 3 80 93 88

Output : 11 is absent*/

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Check(int *,int);
int main()
{
	int *p=NULL;
	int iLength=0,iCnt=0;
	BOOL bRet=FALSE;
	printf("Enter number of elements\n");
	scanf("%d",&iLength);
	p=(int*)malloc(sizeof(int)*iLength);
	printf("Enter Numbers:\n");
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	bRet=Check(p,iLength);
	if(bRet==TRUE)
	{
		printf("11 is present\n");
	}
	else
	{
		printf("11 is Absent");
	}
	free(p);
	return 0;
}
BOOL Check(int Arr[],int iSize)
{
	int i=0;
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]==11)
		{
			return TRUE;
		}
		
	}
}
