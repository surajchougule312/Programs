
/*Accept Character from user and check whether it is digit or not
(0-9).
Input : 7
Output : TRUE
Input : d
Output : FALSE*/

#include<stdio.h>
#define true 1
#define false 0
typedef int BOOL;
BOOL ChkDigit(char ch)
{
	if(ch>='0' && ch<='9')
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
	bRet=ChkDigit(cValue);
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