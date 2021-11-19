
/*Write a program which accept string from user and return
difference between frequency of small characters and frequency of
capital characters.

Input : “MarvellouS”

Output : 6 (8-2)*/

#include<stdio.h>
int CountSmall(char *str)
{
	int CCount=0,SCount=0;
	if(str==NULL)
	{
		return 0;
	}
	while(*str!='\0')
	{
		if(*str>='A' && *str<='Z')
		{
			CCount++;
		}
		else if(*str>='a' && *str<='z')
		{
			SCount++;
		}
		str++;
	}
	return SCount-CCount;
}
int main()
{
	char Arr[20];
	int iRet=0;
	printf("Enter string\n");
	scanf("%[^'\n']s",&Arr);
	iRet=CountSmall(Arr);
	printf("%d",iRet);
	return 0;
}