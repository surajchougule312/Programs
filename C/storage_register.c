#include<stdio.h>
void fun()
{
	register int i;
	register double d=3.12; //compiler considered as float and double as auto it does not give error
}
void gun()
{
	register int i;
	for(i=10;i>=0;i--)
	{
		printf("%d\t",i);
	}
}
int main()
{
	fun();
	gun();
	return 0;
}