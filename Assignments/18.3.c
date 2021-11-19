
/*Accept N numbers from user and accept one another number as NO ,
return index of last occurrence of that NO.

Input : N : 6
NO: 66
Elements :85 66 3 66 93 88

Output : 3
Input : N : 6
NO: 93
Elements :85 66 3 66 93 88

Output : 4
Input : N : 6
NO: 12
Elements :85 11 3 15 11 111

Output : -1*/

#include<stdio.h>
#include<stdlib.h>

int FirstOccurence(int Arr[],int iSize,int iNo)
{
	int i=0,index=0;
	
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]==iNo)
		{
			//index=i;
			break;
		}
	}
	if(i==iSize)
	{
		return -1;
	}
	else
	{
		return i;
	}
	//return index;
}
int main()
{
	int *ptr=NULL;
	int iLength=0,i=0,iValue=0;
	int iRet=0;
	printf("Enter numbers of elements\n");
	scanf("%d",&iLength);
	
	ptr=(int*)malloc(sizeof(int)*iLength);
	printf("Enter elements\n");
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("Enter NO\n");
	scanf("%d",&iValue);
	printf("Entered data is:");
	{
		for(i=0;i<iLength;i++)
		{
			printf("%d\t",ptr[i]);
		}
		printf("\n\n");
	}
	iRet=FirstOccurence(ptr,iLength,iValue);
	if(iRet==-1)
	{
		printf("There is no such number");
	}
	else
	{
		printf("Number is there at: %d\n",iRet);
	}
	free(ptr);
	return 0;
}