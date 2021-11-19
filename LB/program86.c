
#include<stdio.h>
#include<stdlib.h>
int Maximum(int Arr[],int iSize)
{
	int i=0,iCnt=0,iMax=Arr[0];
	for(i=1;i<iSize;i++)
	{
		
		if(Arr[i]>iMax)
		{
			iMax=Arr[i];

		}
	}
	return iMax;
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
	iRet=Maximum(ptr,iLength);
	printf("Maximum number is:%d\n",iRet);
	free(ptr);
	return 0;
}