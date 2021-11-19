import java.lang.*;


class Overloding
{
	public static void main(String arg[])
	{
		//System.out.println("Inside main");
		Demo obj;	//Reference
		obj=new Demo();
		//Demo obj=new Demo();

		System.out.println("Addition of two integer"+obj.Add(10,11));
		System.out.println("Addition of two integer"+obj.Add(10.5f,11.3f));
		System.out.println("Addition of two integer"+obj.Add(10,11,30));
		obj.fun(10,11.3f);//First fun
		obj.fun(11.3f,10);//Second fun
	}
}

class Demo
{
	//Overloading by changing the data type
	public int Add(int no1, int no2)
	{
		//System.out.println("Inside First add");
		return no1+no2;
	}
	public float Add(float no1, float no2)
	{
		//System.out.println("Inside second Add");
		return no1+no2;
	}
	//Overloading by changing the number of arguments
	public int Add(int no1, int no2,int no3)
	{
		//System.out.println("Inside First add");
		return no1+no2+no3;
	}
	public void fun(int i, float f)
	{
		System.out.println("Inside first fun");
	}
	public void fun( float f,int i)
	{
		System.out.println("Inside Second fun");
	}

}