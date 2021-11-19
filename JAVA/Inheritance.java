class Inheritance
{
	public static void main(String arg[])
	{
		Base bobj=new Base();
		bobj.fun();
		Derived dobj=new Derived();
		dobj.fun();
	}
}

class Base
{
	public int x;
	public int y;
	public Base()
	{
		System.out.println("Base Constructor");
		this.x=0;
		this.y=0;
	}
	public Base(int i, int j)
	{
		System.out.println("Base Constructor");
		this.x=i;
		this.y=j;
	}
	public void fun()
	{
		System.out.println("Base Fun");
	}

}

class Derived extends Base   //class derived:public derived
{
	public int a,b;
	public Derived()
	{
		System.out.println("Derived Cinstructor");
		this.a=0;
		this.y=0;
	}
	public Derived(int no1, int no2)
	{
		System.out.println("Derived Cinstructor");
		this.a=no1;
		this.y=no2;
	}
	public void gun()
	{
		System.out.println("Derived class");
	}
}
