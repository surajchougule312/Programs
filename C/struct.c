#include<stdio.h>
#pragma pack(1)
struct demo
{
	int no;
	char ch;
	float f;
	int d;
};
int main()
{
	
struct demo obj;
obj.no=11;
obj.ch='m';
obj.f=3.14;
obj.d=15;
printf("%d",sizeof(obj));
return 0;
}