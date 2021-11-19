
/* WAP which accept width and hight from user and calculate
its area*/
// time complexity-

#include<stdio.h>
double ReactArea(float fWidth, float fHight);
int main()
{
	float iValue1=0;
	float iValue2=0;
	double dRet=0;

	printf("Enter Width\n");
	scanf("%f",&iValue1);
	
	printf("Enter Hight\n");
	scanf("%f",&iValue2);
	dRet=ReactArea(iValue1,iValue2);
	printf("Area of rectangle %0.4lf\n",dRet);
	return 0;
}
double ReactArea(float fWidth, float fHight)
{
	return fWidth*fHight;
}