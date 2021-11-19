
/*Accept N numbers from user and display all such elements which are
multiples of 11.
Input : N : 6

Elements :85 66 3 55 93 88

Output : 66 55 88*/

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
	int i=0;
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]%11==0)
		{
			printf("%d\t",Arr[i]);
		}
	}
}

int main()
{
	int *p=NULL;
	int iLength=0,iCnt=0;
	printf("Enter number of elements\n");
	scanf("%d",&iLength);
	p=(int*)malloc(sizeof(int)*iLength);
	printf("Enter numbers\n");
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	Display(p,iLength);
	free(p);
	return 0;
}