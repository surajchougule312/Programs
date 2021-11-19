/*Accept n numbers from user and fond average*/
#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[],int iSize)
{
	int i=0,iSum=0;
	float fResult=0.0f;
	for(i=0;i<iSize;i++)
	{
		iSum=iSum+Arr[i];
	}
	fResult=(float)iSum / /*(float)*/iSize;	//Expicit typecasting
	return fResult;
}

int main()
{
	int *ptr=NULL;
	int iLength=0,i=0;
	float fRet=0.0;
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
		printf("\n");
	}
	fRet=Average(ptr,iLength);
	printf("Average is:%0.2f\n",fRet);
	free(ptr);
	return 0;
}