#include<stdio.h>
int main()
{
	auto int r=0;
	auto int crr=0;
	auto int area=0;
	printf("Enter redious of circle\n");
	scanf("%d",&r);
	crr=2*22/7*r;
	area=22/7*r*r;
	printf("Circumference of circle is %d\n",crr);
	printf("Area of circle %d",area);
	return 0;
}