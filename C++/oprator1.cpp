#include<iostream>
using namespace std;
class demo
{
	public:
	int i,j;
	demo(int x=10,int y=20)
	{
		i=x;
		j=y;
	}
};
// return_value oprator symbol parameters
demo operator +(demo op1, demo op2)
{
	return demo(opi.i+op2.i,op1.j+op2.j);
}
int main()
{
	demo obj1(11,21);
	demo obj2(7,5);
	demo ret(0,0);
	ret=obj1+obj2;
	cout<<"\t"<<ret;
	return 0;
}