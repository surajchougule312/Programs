#include<stdio.h>
void Display(int iNo)
{
	int iCnt=0;
	int i=0;
	for(iCnt=iNo;iCnt>=1;iCnt--)
	{
		printf("%d\t#\t",iCnt);
	}
}
int main()
{
	int iValue=0;

	printf("Enter Number\n");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}