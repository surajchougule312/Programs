#include<stdio.h>
int addition(int ino1,int ino2)
{
	return ino1+ino2;
}
int substraction(int ino1,int ino2)
{
	return ino1-ino2;
}
int multiplication(int ino1,int ino2)
{
	return ino1*ino2;
}
int main()
{
	int iret;
	int (*fp)(int,int);
	fp=addition;
	iret=fp(10,20);
	printf("Addition  is %d\n",iret );
	
	fp=substraction;
	iret=fp(10,20);
	printf("Maltiplication is %d\n",iret);
	
	fp=multiplication;
	iret=fp(10,20);
	printf("Multiplication is %d\n",iret);
	return 0;
}