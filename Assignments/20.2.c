
/*Accept Character from user and check whether it is capital or not
(A-Z).
Input : F
Output : TRUE
Input : d
Output : FALSE*/

#include<stdio.h>
#define true 1
#define false 0
typedef int BOOL;
BOOL ChkCapital(char ch)
{
	if(ch>='A' && ch<='Z')
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
	bRet=ChkCapital(cValue);
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