#include<stdio.h>
char CapitalToSmall(char c)
{
	if((c>='A') && (c<='Z'))
	{
		return c+32;
	}
	
}

int main()
{
	char ch='\0';
	char cRet='\0';
	printf("Enter Character\n");
	scanf("%c",&ch);
	cRet=CapitalToSmall(ch);
	printf("small Letter is:%c",cRet);

	return 0;
}