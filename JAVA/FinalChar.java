class FinalChar
{
	public static void main(String arg[])
	{
		Demo obj=new Demo();
		System.out.println("Value of j:"+obj.j);
		
	}
}
class Demo
{
	public int i;
	public final int j;
public Demo()	//Demo():j(11) in c++
{
	i=20;
	j=11;
}
}
