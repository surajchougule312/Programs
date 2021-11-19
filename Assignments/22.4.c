
/*Write a program which accept string from user and check whether
it contains vowels in it or not.

Input : “marvellous”

Output : TRUE

Input : “Demo”

Output : TRUE

Input : “xyz”

Output : FALSE*/

#include<stdio.h>
#define true 1
#define false 0
typedef int BOOL;
BOOL ChkVowel(char *str)
{
	if(str==NULL)
	{
		return 0;
	}
	while(*str!='\0')
	{
		if(*str=='A' || *str=='E' || *str=='I' || *str=='O' || *str=='U' )
		{
			return true;
		}
		else if(*str=='a'|| *str=='e' || *str=='i' || *str=='o' || *str=='u')
		{
			return true;
		}
		str++;
	}
	
}
int main()
{
	char Arr[20];
	BOOL bRet=false;
	printf("Enter string\n");
	scanf("%[^'\n']s",&Arr);
	bRet=ChkVowel(Arr);
	if(bRet==true)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
	return 0;
}