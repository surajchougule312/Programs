#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s,area;
	printf("enter sides of trangle\n");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area of trangle id:%f",area);
	return 0;
}