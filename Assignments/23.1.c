
/*1.Write a program which accept string from user and convert it into
lower case.

Input : “Marvellous Multi OS”

Output : marvellous multi os*/

#include<stdio.h>
void strlwrx(char *str)
{
	char ch='\0';
	while(*str!='\0')
	{
	if(*str>='A' && *str<='Z')
	{
		ch=*str+32;
		printf("%c",ch);
	}
	else
	{
		printf("%c",*str);
	}
	str++;
	}
	//return *str;
	
}
int main()
{
	char Arr[20];
	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);
	strlwrx(Arr);
	
	return 0;
}