#include <stdio.h>
void fun(int l)
{
	auto int i;
	auto int j=10;
	int k=30;  //also auto
	printf("scope of auto veriable strats from here om functionn fun\n");
	printf("defoult value of uninitialized auto veriable is %d",i);
	printf("\nscope of auto veriable end in here function fun");
}
int main()
{
	//auto veriable can not access outside of its scope. 
	//printf("%d\n",j);   // j is not accesible outside the function...its out of scope of j
	fun(10);
	return 0;
}