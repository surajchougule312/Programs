#include<stdio.h>
int main()
{
	struct outer
	{
		int no;
		float f;
		struct inner
		{
			int i;
			int j
		}iobj1,iobj2;
		int k;
	}oobj;
	oobj.no=11;
	oobj.f=3.14;
	oobj.k=12;
	oobj.iobj1.i=13;
	oobj.iobj1.j=14;
	oobj.iobj2.i=15;
	oobj.iobj2.j=16;
	
	printf("%d\n",oobj.no);
	printf("%f\n",oobj.f);
	
	printf("%d\n",oobj.iobj1.i);
	printf("%d\n",oobj.iobj1.j);
	printf("%d\n",oobj.k);
	printf("%d\n",oobj.iobj2.i);
	printf("%d\n",oobj.iobj2.j);
	printf("%d\n",oobj);
	return 0;
}