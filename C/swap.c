#include<stdio.h>
int main()
{
	auto int n1=0;
	auto int n2=0;
	auto int n3=0;
	printf("Enter numbers");
	scanf("%d%d",&n1,&n2);
	printf("\nNumbers before swap%d %d",n1,n2);
	n3=n1;
	n1=n2;
	n2=n3;
	printf("\nNumbers after swap is %d %d",n1,n2);
	return 0;
}