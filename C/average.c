#include<stdio.h>
int main()
{
	auto float no1,no2,no3;
	float avg;
	Printf("enter three numbers\n");
	scanf("%d%d%d",&no1,&no2,&no3);
	avg=(no1+no2+no3)/3;
	printf("Average of three numbers is: %6.2f",avg);
	return 0;
}