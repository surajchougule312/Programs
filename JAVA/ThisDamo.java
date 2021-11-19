class Thisdemo
{
	public static void main(String arg[])
	{
		Demo obj=new Demo(10,20);
	}
}
class Demo
{
	public int x,y;

	public Demo()
	{
		//this(10,20);
		System.out.println("Defoult Constructor");
	}
	public Demo(int a, int b)
	{
		this();		//use no 1
		System.out.println("Parameterized constructor");
		this.x=a;
		this.y=b;
	}
	public void fun()
	{
		System.out.println("Inside Fun");
		System.out.println("Value of x is:"+this.x);	//use no 2
	}
	public void gun()
	{
		System.out.println("Inside Gun");
		this.fun();		//use no 3
	}
}