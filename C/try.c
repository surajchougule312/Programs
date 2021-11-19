
#include<stdio.h>
#include<conio.h>
void displayconvert(char cvalue)
{
	char c;
	 if(c>='a'&&c<='z')
	 {
		  c =(c-32);
	 }
	 
		  printf("Uppercase is: %u", c);
	 
	/*else if(c>='A'&&c<='Z')
	{
		c=c+32;
		printf("%c",strupr(c));
	}*/
}
int main()
{
	char cvalue;
printf("Enter character");
scanf("%c",&cvalue);
displayconvert(cvalue);
return 0;	
}