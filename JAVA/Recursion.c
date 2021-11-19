#include<stdio.h>

int PowerIW(int x, int y)
{
	int iMult=1;

	while(y!=0)
	{
		iMult=iMult*x;
		y--;
	}
	return iMult;
}

int PowerR(int x,int y)
{
	static int iMult=1;

	if(y!=0)
	{
		iMult=iMult*x;
		y--;
		PowerR(x,y);	//Recursive call
	}
	return iMult;
}


int PowerIF(int x, int y)
{
	int iMult=1,i=0;

	for(i=1;i<=y;i++)
	{
		iMult=iMult*x;
	}
	return iMult;
}

int main()
{
	int no1=0,no2=0,iret=0;

	printf("Enter base\n");
	scanf("%d",&no1);

	printf("Enter power\n");
	scanf("%d",&no2);

	iret=PowerIW(no1,no2);
	printf("result is :%d\n",iret);

	iret=PowerIF(no1,no2);
	printf("result is :%d\n",iret);

	iret=PowerR(no1,no2);
	printf("result is :%d\n",iret);
	return 0;

}