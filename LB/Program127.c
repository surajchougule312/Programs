#include<stdio.h>
void Swap(char *p, char *q)
{
	char Temp;
	Temp=*p;
	*p=*q;
	*q=Temp;
}

int main()
{
	char ch1,ch2;
	printf("Enter first character\n");
	scanf("%c",&ch1);
	printf("enter second character\n");
	scanf("%c",&ch2);
	printf("Before swapping characters are %c %c\n",ch1,ch2);
	Swap(&ch1,&ch2);
	printf("After swapping characters are %c %c\n",ch1,ch2);
	return 0;
}