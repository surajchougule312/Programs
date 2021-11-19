#include<stdio.h>
#include<stdlib.h>
int main()
{
	struct demo4
	{
		int i;
	};
	struct demo4 obj4;
	obj4.i=10;
	printf("%d\n",obj4.i);
	struct demo5	
	{
		int i;
	};
	struct demo5 obj5; 
	struct demo5 *ptr5;
	ptr5=&obj5;
	ptr5->i=10;
	printf("%d\n",ptr5->i);
	struct hello
	{
		int i,j;
	};
	struct hello *p=(struct hello*)malloc(sizeof(struct hello));
	printf("sizeof structure is%d\n",sizeof(*p));
	if(p==NULL)
	{
		printf("unable to allocate memory\n");
	}
	return 0;
}