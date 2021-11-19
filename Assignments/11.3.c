
/*Accept number of rows and number of columns from user and 
display belowpattern.
Input : iRow = 3 iCol = 5
Output :
 A A A A A
 B B B B B
 C C C C C*/

#include<stdio.h>
void Pattern(int iRow, int iCol)
{
	int i,j;
	char ch='A';
	for(i=1,ch='A';i<=iRow;i++,ch++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("%c\t",ch);
		}
		printf("\n");
	}
}
int main()
{
	int iValue1=0, iValue2=0;
	printf("Enter number of rows\n");
	scanf("%d",&iValue1);
	printf("ENter number of columns\n ");
	scanf("%d",&iValue2);
	Pattern(iValue1,iValue2);
	return 0;
}