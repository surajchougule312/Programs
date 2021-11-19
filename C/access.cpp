#include<iostream>
using namespace std;
class demo
{
	public:
	int a;
	private:
	int b;
	protected:
	int c;
	public:
	demo(int i,int j,int  k)
	{
		cout<<"Constructor\n";
		this->a=i;
		this->b=j;
		this->c=k;
	}
	void fun()//vooid
	{
		cout<<"Value of a"<<this->a<<"\n";
		cout<<"Value of b"<<this->b<<"\n";
		cout<<"Value of c"<<this->c<<"\n";
	}
	
};
int main()
{
	cout<<"Inside main\n";
	demo *p= new demo(10,20,30);
	cout<<"Value of a"<<p->a<<"\n";
	//cout<<"Value of b"<<p->b<<"\n";
	//cout<<"Value of c"<<p->c<<"\n";
	p->fun();
	return 0;
}