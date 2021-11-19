#include<stdio.h>
void percentage(int marks,int total)
{
	float result;
	result=(marks/total*100);
	printf("%f",result);
	//return result;
}
int main()
{
	int ivalue1=0,ivalue2=0;
	float iRet ;
	
	printf("ENter total marks\n");
	scanf("%d",&ivalue1);
	printf("Enter obtained marks\n");
	scanf("%d",&ivalue2);
	percentage(ivalue1,ivalue2);
//	printf("Percentage is: %f",iRet);
	return 0;
}