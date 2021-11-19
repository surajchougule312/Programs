
/*accept 5 numbers from user and perform addition*/


#include<stdio.h>

int main()
{
	int Arr[5];	//Array of 5 integers
	int iSum=0;
	int iCnt=0;
	printf("Enter numbers: \n");
	
	for(iCnt=0;iCnt<5;iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}

	//iSum=Arr[0]+Arr[1]+Arr[2]+Arr[3]+Arr[4];

	iSum=iSum+Arr[0];
	iSum=iSum+Arr[1];
	iSum=iSum+Arr[2];
	iSum=iSum+Arr[3];
	iSum=iSum+Arr[4];
	printf("Addition is %d",iSum);
	return 0;
}