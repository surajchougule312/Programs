
/*WAP which acept temperature in Fahrenhit and convert
 it into celsious(1celsious=(Fahrenheit-32)*5/9)*/

#include<stdio.h>
double FHtoCS(float);
int main()
{
	float fValue=0.0;
	double dRet=0.0;
	printf("Eenter temp incelcious \n");
	scanf("%f",&fValue);
	dRet=FHtoCS(fValue);
	printf("Tempreture inFarenheit is %lf\n",dRet );
	return 0;
}
double FHtoCS(float fCelse)
{
	double fFaren=0.0;
	fFaren=((fCelse -32)*5)/9;
	return fFaren;
	//return (fCelse -32)*(5/9);
}