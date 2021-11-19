#include<stdio.h>
void DisplayFactors(int);
int main()
{
	int iNo=0;
	printf("Enter Number\n");
	scanf("%d",&iNo);
	DisplayFactors(iNo);
	return 0;
}

void DisplayFactors(int iValue)
{
	//logic
	
	int iCnt=0;
	if(iValue<0)
	{
		iValue=-iValue;
	}
	for(iCnt=1;iCnt<iValue;iCnt++)	//O(N)
	{
		if((iValue%iCnt)==0)//iCnt is factor
		{
			printf("%d\n",iCnt);
		}
		/*else
		{
			printf("non Factors are%d\t",iCnt);
		}*/
	}
}