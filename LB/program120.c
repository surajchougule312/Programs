#include<stdio.h>
int SpeceCount(char *str)
{
	int iCnt=0;
	while(*str!='\0')
	{
		if(*str==' ')
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
	printf("Enter Character\n");
	scanf("%[^'\n']s",&Arr);
	iRet=SpeceCount(Arr);
	printf("Spaces are: %d",iRet);
	return 0;
}