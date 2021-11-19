
//Input 4
//output 4 3 2 1

#include<stdio.h>
void display();
int main()
{
	display();
	return 0;
}

void display()		//defination
{
	int i=0;
	for(i=5;i>=1;i--)
	{
		printf("%d\n",i);
	}
}