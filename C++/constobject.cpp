#include<iostream> 
using namespace std;
class demo
{
	public:
	int i;
    int j;//constant characterstics
	demo()//member initialisation list
	{
		cout<<"defoult";
		i=0;j=0;
	}
	demo(int x,int y)
	{
		cout<<"parameterized";
		i=x;j=y;
	}
	
};
int main()
{
	demo obj(10,20);
	obj
	const demo obj2(11,21);
	
	return 0;
}