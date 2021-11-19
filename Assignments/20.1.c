
/*Accept Character from user and check whether it is alphabet or not
(A-Z a-z).
Input : F
Output : TRUE
Input : &
Output : FALSE*/

#include<stdio.h>
#define true 1
#define false 0
typedef int BOOL;
BOOL ChkAlpha(char ch)
{
	if(ch>='A' && ch<='z')
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
	bRet=ChkAlpha(cValue);
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