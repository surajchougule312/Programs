import java.lang.*;

class Arithmatic
{
	public int no1;
	public int no2;
	
	
	public Arithmatic()	//defoult constructor
	{
		this.no1=0;
		this.no2=0;
	}
	public Arithmatic(int x, int y)	//Parameterized constructor
	{
		this.no1=x;
		this.no2=y;
	}
	public int Addition()
	{
		int ans=0;
		ans=this.no1 + this.no2;
		return ans;
	}
	public int Substraction()
	{
		int ans=0;
		ans=this.no1 - this.no2;
		return ans;
	}
}

class Marvellous
{
	public static void main(String arg[])
	{
		System.out.println("Inside main");
		Arithmatic obj1;		//Reference
		obj1 = new Arithmatic();	//Dynamic memory allocation
		Arithmatic obj2=new Arithmatic(21,11);
		int ret=0;
		ret=obj2.Addition();
		System.out.println("Addition is :"+ret);
		ret=obj2.Substraction();
		System.out.println("Substraction is:"+ret);
	}
	
	
}