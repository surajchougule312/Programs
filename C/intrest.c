#include<stdio.h>
int main()
{
	float p,roi,t;
	auto float m,i;
	printf("enter principle,rate of intrest and time period");
	scanf("%f%f%f",&p,&roi,&t);
	i=p*roi*t/100;
	m=p+i;
	printf("intrest is %f\n",i);
	printf("Ammount is %f",m);
	return 0;
}