
class StaticDemo
{
	public static void main(String arg[])
	{
		System.out.println("Value of static j:"+Demo.j);
		Demo.gun();
		Demo obj=new Demo();
		obj.fun();
		obj.gun();

		System.out.println("Value of static i:"+obj.i);
		System.out.println("Value of static j:"+obj.j);

	}
}
class Demo
{
	public int i=10;
	public static int j=20; 
	public void fun()
	{
		System.out.println("Insdie non static fun");
		System.out.println(i);
		System.out.println(j);
	}
	public static void gun()
	{
		System.out.println("Insdie static gun");
		//System.out.println(i);  NA
		System.out.println(j);
0
	}
}
//static int Demo :: j=20 in c++