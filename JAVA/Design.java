class Design
{
	public static void main(String arg[])
	{
		Signleton sobj=Signleton.GetObject();

		//Signleton obj=new Signleton();
		Signleton sobj2=Signleton.GetObject();
		Signleton sobj1=Signleton.GetObject();
	}
}
final class Signleton
{
	public int x,y;
	private static Signleton obj=new Signleton();

	private Signleton()
	{
		System.out.println("Inside Constructor");
	}
	public static Signleton GetObject()
	{

		return obj;
	}
}