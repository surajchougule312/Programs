#include<stdio.h>
int main()
{
	auto float c=0,f=0;
	printf("Tempreture in fehrenhit ");
	scanf("%f",&f);
	c=5.0/9.0*(f-32);
	printf("\nTempreture in celsious %f",c);
	return 0;
}