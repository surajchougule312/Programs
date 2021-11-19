
/*3.Write a program which accept string from user and toggle the case.

Input : “Marvellous Multi OS”

Output : mARVELLOUS mULTI os*/

#include<stdio.h>
void strtogglex(char *str)
{
	char ch='\0';
	while(*str!='\0')
	{
	if(*str>='A' && *str<='Z')
	{
		ch=*str+32;
		//printf("%c",ch);
	}
	else if(*str>='a' && *str<='z')
	{
		ch=*str-32;
		//printf("%c",ch);
	}
	printf("%c",ch);
	str++;
	}
	//return *str;
	
}
int main()
{
	char Arr[20];
	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);
	strtogglex(Arr);
	
	return 0;
}