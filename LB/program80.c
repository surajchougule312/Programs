/*accept n numbes from user and count even numbers*/


#include<stdio.h>
#include<stdlib.h>
int CountEven(int Arr[],int iSize)
{
	int i=0,iCnt=0;
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]%2==0)
		{
			iCnt++;
		}

	}
	return iCnt;
}

int main()
{
	int *ptr=NULL;
	int iLength=0,i=0;
	int iRet=0;
	printf("Enter numbers of elements\n");
	scanf("%d",&iLength);
	ptr=(int*)malloc(sizeof(int)*iLength);
	printf("Enter elements\n");
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("Entered data is:");
	{
		for(i=0;i<iLength;i++)
		{
			printf("%d\t",ptr[i]);
		}
		printf("\n\n");
	}
	iRet=CountEven(ptr,iLength);
	printf("Addition is:%d\n",iRet);
	free(ptr);
	return 0;
}