
class ObjectDemo1
{
	public static void main(String arg[]) throws Exception
	{
		String s1="Hello";
		String s2="Hello";
		if(s1.equals(s2))
		{
			System.out.println("Strings are equal"); 
		}
		Demo obj1=new Demo("Rahul","PPA");
		Demo obj2=new Demo("Amit ","Paython");

		System.out.println("Hashcode of obj1 is:"+obj1.hashCode());
		System.out.println("Hashcode of obj2 is:"+obj2.hashCode());
		System.out.println(obj1.toString());

		Class cobj=obj1.getClass();
		System.out.println("Name of class is :"+cobj.getName());
		
		Demo objX=(Demo)obj1.clone();

		System.out.println(objX.toString());

		obj1=null;
		obj2=null;
		System.gc();
	}
}
class Demo implements Cloneable
{
	public String Batch;
	public String Name;
	public Demo(String x, String y)
	{
		this.Name=x;
		this.Batch=y;
	}
	public String toString()
	{
		return this.Name+"  "+this.Batch;
	}
	protected void finalize()
	{
		System.out.println("Inside finalize method");
	}
	public Object clone() throws CloneNotSupportedException
	{
		return super.clone();
	}
}