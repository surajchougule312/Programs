#include<stdio.h>

int FirstChar(char *str,char ch)
{
	int i=0;
	while(*str!=0)
	{
		if(str[i]==ch)
		{
			i++	;
		}

		
		str++;
	}
	return i;
}

int main()
{
	char Arr[20];
	char cValue='\0';
	int iRet=0;

	printf("Enter string:\n");
	scanf("%[^'\n']s",Arr);

	printf("Enter caracter:\n");
	scanf(" %c",&cValue);

	iRet=FirstChar(Arr,cValue);
	printf("First Occurence at:%d",iRet);
	return 0;
}