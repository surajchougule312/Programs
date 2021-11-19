#include<stdio.h>
void Pattern(int iRow, int iCol)
{
	int i,j;
	char ch='A';
	for(i=1;i<=iRow;i++)
	{
		for(j=0;j<iCol;j++)
		{
			if((iCol + i) % 2 == 0)
			{
				printf("%c\t",j+'a');
			}
			else
			{
			printf("%c\t",j+'A');
			}
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