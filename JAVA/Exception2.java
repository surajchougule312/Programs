import java.util.Scanner;
class Exception2
{
	public static void main(String arg[])
	{
		int no1=0,no2=0;
		float result=0.0f;
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter first number");
		no1=sobj.nextInt();

		System.out.println("Enter second number");
		no2=sobj.nextInt();
		try
		{
		result=no1/no2;
		System.out.println("Division is :"+result);

		}
		catch(ArithmeticException obj)
		{
			System.out.println("Arithmatic exception occure");
		}
		catch(ArrayIndexOutOfBoundsException obj)
		{
			System.out.println("Array index exception occured");
		}
		catch(Exception obj)	//generic catch block
		{
			System.out.println("Exception Occured");
		}
		finally
		{
			System.out.println("inside finaly");
		}
		
	}
}