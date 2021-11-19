
/*Accept Character from user and check whether it is small case or
not (a-z).
Input : g
Output : TRUE
Input : D
Output : FALSE*/

#include<stdio.h>
#define true 1
#define false 0
typedef int BOOL;
BOOL ChkSmall(char ch)
{
	if(ch>='a' && ch<='z')
	{
		return true;
	}
}
int main()
{
	char cValue='\0';
	BOOL bRet=false;
	printf("enter character\n");
	scanf("%c",&cValue);
	bRet=ChkSmall(cValue);
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