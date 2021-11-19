
/*Write a program which accept string from user and display only
digits from that string.

Input : “marve89llous121”

Output : 89121

Input : “Demo”

Output :*/

#include<stdio.h>
void struprx(char *str)
{
	char ch='\0';
	while(*str!='\0')
	{
	if(*str>='0' && *str<='9')
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