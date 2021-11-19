
/*  Write a program which accept renge from user and
display all numbers in between that renge in Reverse order.*/
//integer overflow chi condition nantr lihaychi ahe.


#include<stdio.h>

void RengeDisplay(int, int);
int main()
{
	int iValue1=0;
	int iValue2=0;
	printf("Enter Start NUmber\n");
	scanf("%d",&iValue1);
	
	printf("Enter End Numberr\n");
	scanf("%d",&iValue2);
	
	RengeDisplay(iValue1,iValue2);
	return 0;
}

void RengeDisplay(int iNo1, int iNo2)
{
	int iCnt=0;
	for(iCnt=iNo2;iCnt>=iNo1;iCnt--)
	{
		printf("%d\t",iCnt);
	}
}