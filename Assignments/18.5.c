
/*Accept N numbers from user and return product of all odd elements.
Input : N : 6

Elements :15 66 3 70 10 88

Output : 45
Input : N : 6

Elements :44 66 72 70 10 88

Output : 0*/

#include<stdlib.h>
#include<stdio.h>
int Product(int Arr[],int iLength)
{
	int i=0,iP=1;
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]%2!=0)
		{
			iP=iP*Arr[i];
		}
	}
	if(i==iLength) //updator
	{
		return 0;
	}
	return iP;
}
int main()
{
	int *p=NULL;
	int iSize=0, i=0,iRet=0;
	printf("Enter number of elements");
	scanf("%d",&iSize);

	p=(int *)malloc(sizeof(int)*iSize);
	if(p==NULL)
	{
		printf("unable to allocate memory\n");
		return-1;
	}
	printf("Enter elements");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&p[i]);
	}
	iRet=Product(p,iSize);
	printf("Product of odd number :%d",iRet);
	free(p);
	return 0;
}