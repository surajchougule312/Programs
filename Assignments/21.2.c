
/*Accept character from user. If character is small display its
corresponding capital character, and if it small then display its
corresponding capital. In other cases display as it is.
Input : Q
Output : q
Input : m
Output : M
Input : 4
Output : 4
Input : %
Output : %*/

#include<stdio.h>
int Display(char c)
{
	if(c>='A' && c<='Z')
	{
		//printf("%c\n",c+32);
		return c+32;

		
	}
	else if(c>='a' && c<='z')
	{
		return c-32;

	}
	 
}
int main()
{
	char ch='\0';
	int iRet=0;
	printf("Enter character\n");
	scanf("%c",&ch);
	iRet=Display(ch);
	printf(":%c",iRet);
	return 0;
}