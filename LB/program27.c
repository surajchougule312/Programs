#include<stdio.h>
void display();
int main()
{
	display();
	return 0;
}
void display()
{
	int iNo=7521;
	int iDigit=0;
	while(iNo!=0)
	{
		iDigit=iNo%10;
		printf("%d\n",iDigit);
		iNo=iNo/10;
	}
}