import java.util.*;
class Commond1
{
	public static void main(String arg[])
	{
		if(arg.length==2)
		{
			int no1=Integer.parseInt(arg[0]);
			int no2=Integer.parseInt(arg[1]);
			int ans=no1+no2;
			System.out.println("Addition is:"+ ans);
		}
	}
}