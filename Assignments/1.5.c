#include<stdio.h>
void accept(int iNo)
{
	int icnt=0;
	for(icnt=1;icnt<=iNo;icnt++)
	{printf("* \t");}
}
int main()
{
	int iValue=0;
	iValue=5;
	accept(iValue);
	return 0;
}