
/*Accept N numbers from user and return difference between summation
of even elements and summation of odd elements.
Input : N : 6

Elements :85 66 3 80 93 88

Output : 53 (234 - 181)*/

#include<stdio.h>
#include<stdlib.h>
int Difference(int*,int);
int main()
{
	int *p=NULL;
	int iLength=0;	
	printf("Enter Number of elements\n");
	scanf("%d",&iLength);
	p=(int*)malloc(sizeof(int)*iLength);
	int iCnt=0,iRet=0;
	printf("Enter numbers: \n");
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	iRet=Difference(p,iLength);	
	printf("Addition is %d",iRet);

	free(p);
	return 0;
}
int Difference(int Arr[],int iLength)
{
	int i=0,iEsum=0,iOsum=0;
	for(i=0;i<iLength;i++)
	{
		
		if(Arr[i]%2==0)
		{
			iEsum=iEsum+Arr[i];
			printf("%d\n",iEsum);
		}
		else
		{
			iOsum=iOsum+Arr[i];
			printf("%d\n",iOsum);
		}
	}
	return iEsum-iOsum;

}