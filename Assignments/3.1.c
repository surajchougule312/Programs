#include<stdio.h>

void PrintEven(int);
int main()
{
	int iValue=0;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	PrintEven(iValue);
	return 0;
}
void PrintEven(int iNo)
{
	int iCnt=0 ,iTemp=1;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
		while(iCnt<iNo)
		{
			if(iTemp%2==0)
			{
				iCnt=iCnt+1;
				printf("%d\t",iTemp);
			}
			iTemp++;
		}
}	
	
