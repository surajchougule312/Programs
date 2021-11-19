
/* write a program which accept redious of circle from user
 and calculate its area*/
//consider PI=3.14.
//time complexity-

#include<stdio.h>

double CircleArea(float);
int main()
{
	float iValue=0.0;
	double dRet=0.0;
	printf("Enter Redious of circle \n");
	scanf("%f",&iValue);
	dRet=CircleArea(iValue);
	printf("Area of circle is %0.4lf\n",dRet );
	return 0;
}
double CircleArea(float fRedious)
{
	//float i;
	//i=fRedious;
	//float PI=3.14;
	float fArea=0.0;

	fArea=fRedious*fRedious*3.14;
	//printf("%f",fArea);
	return fArea;
	//return i*i*3.14;
}