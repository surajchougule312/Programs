#include<stdio.h>
void Display(int iNo)
{
	int iCnt=0;
	int i=0;
	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		printf("%c\t",iCnt+'A');
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