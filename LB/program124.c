#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(char *str)
{
	char *start=NULL;
	char *end=NULL;
	start=str;
	end=str;
	while(*end!='\0')
	{
		end++;
	}
	end--;

	while(start<end)
	{
		if(*start!=*end)
		{
			break;
		}
		start++;
		end--;
	}
	if(start<end)
	{
		return false;
	}
	else 
	{
		return true;
	}
}

int main()
{
	char Arr[30];
	bool bRet=false;

	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);

	bRet=CheckPallindrome(Arr);
	if(bRet==true)
	{
		printf("It is Pallindrome string");
	}
	else
	{
		printf("It is not Pallindrom sring");
	}

	return 0;
}
