#include<stdio.h>
void Reverse(char *str)
{
	int i=0;
	while(*str!=0)
	{
		printf("%s",i);
	}
	str--;
}
int main()
{
	char Arr[20];
	printf("Enter String\n");
	scanf("%s",Arr);
	Reverse(Arr);
	return 0;
}