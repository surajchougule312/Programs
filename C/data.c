typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL chkvowel(char c)
{
	int lowercase_vowel, uppercase_vowel;
	char ch;
	
	lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
	uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
	
	if(lowercase_vowel || uppercase_vowel)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
int main()
{
	char val='\0';
	BOOL bret=FALSE;
	printf("Enter character\n");
	scanf("%c",&val);
	if(bret==FALSE)
	{
		printf("It Is Vowel");
	}
	else
	{
		printf(" Vowel");
	}
return 0;
}
