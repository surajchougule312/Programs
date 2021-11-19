#include<stdio.h>
int no;
int main()
{
	printf("inside main\n");
	fun();
	gun();
	return 0;
}
void fun()
{
	int i=11;
	int j;
	auto int k;
	auto int l=11;
}
void gun()
{
	register int x=11;
	register int y;
}