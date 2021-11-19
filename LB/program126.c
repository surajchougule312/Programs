#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(char *str)
{
	char *end=NULL;
	end=str;
	while(*end!='\0')
	{
		end++;
	}
	end--;

	while(str<end)
	{
		if(*str!=*end)
		{
			break;
		}
		str++;
		end--;
	}
	if(str<end)
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
		printf("It is not Pallindrome string");
	}

	return 0;
}
