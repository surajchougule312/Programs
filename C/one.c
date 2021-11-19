#include<stdio.h>
int globle =10;
int i;
int main()
{
	//extern int i;
	extern void fun();
	printf("\nValue of external i is %d",i);
	fun();
	return 0;
}