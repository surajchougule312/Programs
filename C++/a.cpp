#include<iostream>
using namespace std;

class demo 
{
	public:
	int x,y,z;
	static int no;
	void fun()
	{
		cout<<"inside  fun\n";
	}
	static void gun()
	{
		cout<<"inside  gun\n";
	}	
		demo(int a=10,int b=20,int c=30)
		{
			this->x=a;
			this->y=b;
			this->z=c;
		}
	
};
int main()
{
	cout<<"SIze of object"<<demo::no<<"\n";
	demo::gun();
	demo obj1(1,2,3);
	demo obj2(11,22,33);
	obj1.fun();
	cout<<"SIze of object"<<sizeof(obj1)<<"\n";
	return 0;
}