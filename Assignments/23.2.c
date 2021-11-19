
/*2.Write a program which accept string from user and convert it into
upper case.

Input : “Marvellous Multi OS”

Output : MARVELLOUS MULTI OS*/

#include<stdio.h>
void struprx(char *str)
{
	char ch='\0';
	while(*str!='\0')
	{
	if(*str>='a' && *str<='z')
	{
		ch=*str-32;
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
	struprx(Arr);
	
	return 0;
}