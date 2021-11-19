#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
			printf("%d is gretter",a);
	}
	else
	{
		if(b>c)
			printf("%d is gretter",b);
	
		else
			printf("%d is gretter",c);
	}
	return 0;
}