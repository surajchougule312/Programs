
/*Accept character from user. If it is capital then display all the
characters from the input characters till Z. If input character is small
then print all the characters in reverse order till a. In other cases
return directly.
Input : Q
Output : Q R S T U V W X Y Z
Input : m
Output : m l k j i h g f e d c b a
Input : 8
Output :*/

#include<stdio.h>
void Display(char c)
{
	int i=0;
	for(i=c;i<='Z';i++)
	{
	if(c>='A' && c<='Z')
	{
		printf("%c\t",i);
		
	}
	}
	for(i=c;i<='z';i++)
	{		
	 if(c>='a' && c<='z')
	{
		
		printf("%c\t",i);
	}
	}	
	
	 
}
int main()
{
	char ch='\0';
	printf("Enter character\n");
	scanf("%c",&ch);
	Display(ch);
	return 0;
}