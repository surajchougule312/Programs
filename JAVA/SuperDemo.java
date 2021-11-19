class SuperDemo
{
	public static void main(String arg[])
	{
		Derived dobj=new Derived();
		dobj.gun();
	}
}
class Base
{
	public int x,y;
	public Base(int a,int b)
	{
		System.out.println("Base constructor");
		this.x=a;
		this.y=b;
	}
	public void fun()
	{
		System.out.println("Base fun");
	}
}

class Derived extends Base
{
	public int a,b;
	public Derived()
	{
		super(11,21);	//Use 1 of super keyword
		System.out.println("Derived constructor");
	}
	public void gun()
	{
		System.out.println("Value of x:"+super.x);	//use 2 of super keyword
		super.fun();	//use 3 of super keyword
	}

}