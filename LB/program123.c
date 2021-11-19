#include<stdio.h>

int Count(char *str, char ch )
{
	int iCnt=0;
	if(str==NULL)
	{
		return -1;
	}
	while(*str!='\0')
	{
		if(*str==ch)
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[30];
	int iRet=0;
	char iValue=0;

	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);
	printf("Enter caracter\n");
	scanf(" %c",&iValue);//Imp
	iRet=Count(Arr,iValue);
	printf("Frequency is :%d",iRet);
	return 0;
}
