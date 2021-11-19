#include<iostream> 
using namespace std;
class demo
{
	public:
	int i;
	const int j;//constant characterstics
	demo():j(0)//member initialisation list
	{
		cout<<"defoult";
		i=0;
	}
	demo(int x,int y):j(y)
	{
		cout<<"parameterized";
		i=x;
	}
	
};
int main()
{
	demo obj;
	demo obj2(11,21);
	
	return 0;
}