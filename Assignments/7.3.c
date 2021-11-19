
/**WAP which accept distance in kilometers and 
 * convert  it into meter.*/

#include<stdio.h>
int KMtoMeter(float fKM);
int main()
{
	float iValue=0.0;
	int iRet=0;
	printf("Enter Redious of circle \n");
	scanf("%f",&iValue);
	iRet=KMtoMeter(iValue);
	printf("Meter Count %d\n",iRet );
	return 0;
}
 int KMtoMeter(float fKM)
{
	int iMeter=0;
	iMeter=fKM*1000;
	return iMeter;
}