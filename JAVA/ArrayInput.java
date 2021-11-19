import java.util.*;

class ArrayInput
{
	public static void main(String arg[])
	{
		int iSize=0,iSum=0,i=0;
		int arr[];
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the size of aray");
		iSize=sobj.nextInt();

		arr=new int[iSize];

		System.out.println("Enter the elements");
		for(i=0;i<arr.length;i++)//for(i=0;i<arr.[iSize];i++)
		{
			arr[i]=sobj.nextInt();
		}
		for(i=0;i<arr.length;i++)
		{
			iSum=iSum+arr[i];
		}
		System.out.println("Addition of all Elements:"+iSum);
	}
}