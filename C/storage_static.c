#include<stdio.h>
static globle_static=10;
void fun_normal()
{
	static int i=10;
	printf("\n value of i from fun_normal is %d",i);
	printf("\nAddress of static veriable  is %u",&i);
}
void gun_recursive_static()
{
	static int i=6;
	i--;
	if(i!=0)
	{
		printf("\n In gun_recursive_static value of i is %d",i);
		gun_recursive_static();
	}
}
void gun_recursive_auto()
{
	auto int i=5;
	i--;
	if (i!=0)
	{
		printf("\n In gun_recursive_auto value of i is %d",i);
		gun_recursive_auto();
	}
}
int main()
{    		//calliing function multiple times
	fun_normal();
	fun_normal();
	fun_normal();
	gun_recursive_static();
	//gun_recursive_auto();   // calling gun_recursive_auto function program run an infinity times with output value is i=4;
	return 0;
}