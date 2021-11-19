
/*WAP a program which accept area in squre feet and
convert it into square meter
(1square feet=0.0929 square meter)*/

#include<stdio.h>
double SquareMeter(int);
int main()
{
	int iValue=0;
	double dRet=0.0;
	printf("Enter no of feets\n");
	scanf("%d",&iValue);
	dRet=SquareMeter(iValue);
	printf("in Meters: %lf",dRet);
	return 0;
}
double SquareMeter(int iValue)
{
	float fMet=0.0;
	fMet=iValue*0.0929;
	return fMet;
}