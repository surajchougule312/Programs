import java.util.*;

class Input
{

	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		int iValue1=0, iValue2=0;

		System.out.println("Enter first number");
		iValue1=sobj.nextInt();

		System.out.println("Enter Second number");
		iValue2=sobj.nextInt();

		int iRet=Addition(iValue1,iValue2);
		System.out.println("Addition is"+iRet);
		
	}
	public static int Addition(int iNo1, int iNo2)
{
	int iAns=0;
	iAns=iNo1+iNo2;
	return iAns;
}
}
