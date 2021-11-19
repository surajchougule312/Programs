
class Vertual
{
	public static void main(String arg[])
	{
		Base bp=new Derived();	//upcasting
		bp.fun();	//Derived fun
		bp.gun();	//Base gun
		//bp.sun();	//Error
	}
}
class Base
{
	public void fun()
	{
		System.out.println("Base fun");
	}
	public void gun()
	{
		System.out.println("Base gun");
	}

}
class Derived extends Base
{
	public void fun()	//Overridding
	{
		System.out.println("Derived fun");
	}
	public void sun()
	{
		System.out.println("Derived sun");
	}
}
