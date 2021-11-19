
/*Accept N numbers from user and display all such elements which are
divisible by 5.
Input : N : 6

Elements :85 66 3 80 93 88

Output : 85 80*/

#include<stdio.h>
#include<stdlib.h>
void Display(int*, int);
int main()
{
	int *p=NULL;
	int iLength=0,iCnt=0;
	printf("Enter number of elements\n");
	scanf("%d",&iLength);
	p=(int*)malloc(sizeof(int)*iLength);
	printf("Enter elements:\n");
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	Display(p,iLength);

	free(p);
	return 0;
}
void Display(int Arr[], int iSize )
{
	int i=0;
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]%5==0)
		{
			printf("%d\t",Arr[i]);
		}
	}

}