
class FinalMethod
{
	public static void main(String arg[])
	{
		Base bobj=new Derived();	//Upcasting
		bobj.fun();
	}
}
class Base
{
	public void fun()
	{
		System.out.println("Base Fun");
	}
	public final void gun()	//Method that we cant override
	{
		System.out.println("Base gun");
	}
}

class Derived extends Base
{
	public void fun()	//overide
	{
		System.out.println("derived Fun");
	}
	/*public void gun()
	{
		System.out.println("derived gun");
	}*/

}