#include<stdio.h>
int maximum(int ino1,int ino2)
{
	if(ino1>ino2)
	{
		return ino1;
	}
	else
	{
		return ino2;
	}
}
int main()
{
	auto int ivalue1,ivalue2,iRet;
	//int ip;
	printf("Enter first number\n");
	scanf("%d",&ivalue1);
	printf("Enter second number\n");
	scanf("%d",&ivalue2);
	//iRet=maximum(ivalue1,ivalue2);
	int (*ip)(int ,int);
	////*ip=maximum(ivalue1,ivalue2);
    ip=maximum;
	iRet=ip(ivalue1,ivalue2);
	printf("Maximum number is :%d",iRet);
	return 0;
}