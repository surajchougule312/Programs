#include<iostream> 
using namespace std;
class demo
{
	public:
	int i;
    int j;
	demo()
	{
		cout<<"defoult";
		i=0;j=0;
	}
	demo(int x,int y)
	{
		cout<<"parameterized";
		i=x;j=y;
	}
	void fun()
	{
		i++;
		j++;
	}
	void gun(int a)const
	{
		int no=10;
		//i++;
		//j++;
	}
};
int main()
{
	const demo obj(10,20);
	obj.fun();
	obj.gun(11);
	return 0;
}