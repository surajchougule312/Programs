
/*Write a java program which accept string from user and display 
it in reverse order.
Input : “MarvellouS”
Output : “SuollevraM”*/

import java.util.*;
class Assignment314
{
	public static void main(String arg[])
	{
		StringCount scobj=new StringCount();
		String iRet;
		scobj.Accept();
		scobj.Display();
		iRet=scobj.ReverseX();
		System.out.println("Reverse string is:"+iRet);
		
		
	}
}
class StringCount extends StringX
{
	public String ReverseX()
	{
		char Arr[]=str.toCharArray();
		int i=0,iStart=0,iEnd=Arr.length-1;
		char temp;
		//for(i=0;i<str.length;i++)
		while(iStart<iEnd)
		{
			temp=Arr[iStart];
			Arr[iStart]=Arr[iEnd];
			Arr[iEnd]=temp;
			iStart++;
			iEnd--;
			
		}
		return	String.valueOf(Arr);
	}
}
class StringX
{
	public String str;
	public void Accept()
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter Strinng");
		str=sobj.nextLine();
	}
	public void Display()
	{
		System.out.println("String is:"+str);
	}
}
