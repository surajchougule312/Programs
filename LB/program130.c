#include<stdio.h>

int main()
{
	int iValue=0;
	printf("Enter number\n");
	scanf("%d",&iValue);

	printf("Its hexmdecimal format is: %x\n",iValue);
	printf("Its decimal format is: %d\n",iValue);
	printf("Its octal format is: %o\n",iValue);
	return 0;
}
