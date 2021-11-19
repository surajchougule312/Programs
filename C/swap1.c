#include<stdio.h>
int main()
{
	auto int n1=0;
	auto int n2=0;
	printf("Enter two numbers");
	scanf("%d%d",&n1,&n2);
	printf("\n Numbers before swap %d %d",n1,n2);
	n2=n1+n2;//12+10=22
	n1=n2-n1;//22-10=12
	
	n2=n2-n1;//22-12=10
	printf("\nAfter swap:%d %d",n1,n2);
	return 0;
}