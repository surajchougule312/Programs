
/*Write a program which accept string from user and count number of
small characters.

Input : “Marvellous”

Output : 9*/

#include<stdio.h>
int CountSmall(char *str)
{
	int iCnt=0;
	if(str==NULL)
	{
		return 0;
	}
	while(*str!='\0')
	{
		if(*str>='a' && *str<='z')
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
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