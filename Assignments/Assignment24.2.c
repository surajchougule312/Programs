#include<stdio.h>

int CountChar(char *str, char ch)
{
	int iCnt=0;
	while(*str!=0)
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
	char Arr[20];
	char cValue;
	int iRet=0;
	printf("Enter string:\n");
	scanf("%[^'\n']s",Arr);

	printf("Enter the Character:\n");
	scanf(" %c", &cValue);

	iRet=CountChar(Arr,cValue);
	
	printf("Frequency is :%d",iRet);

	return 0;
}