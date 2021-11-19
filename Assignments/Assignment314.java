
/*Write a java program which accept string from user and check 
whether it contains vowels in it or not.
Input : “marvellous”
Output : TRUE
Input : “Demo”
Output : TRUE
Input : “xyz”
Output : FALSE*/

import java.util.*;
class Assignment314
{
	public static void main(String arg[])
	{
		StringCount scobj=new StringCount();
		boolean bRet=false;
		scobj.Accept();
		scobj.Display();
		bRet=scobj.CheckVowel();
		if(bRet==true)
		{
			System.out.println("TRUE");	
		}
		else
		{
			System.out.println("FALSE");
		}
		
	}
}
class StringCount extends StringX
{
	public boolean CheckVowel()
	{
		char Arr[]=str.toCharArray();
		int i=0,iCnt=0,iCnt1=0;
		//for(i=0;i<str.length;i++)
		while(i<Arr.length)
		{
			if((Arr[i]=='A')||(Arr[i]=='E')||(Arr[i]=='I')||(Arr[i]=='O')||(Arr[i]=='U')||(Arr[i]=='a')||(Arr[i]=='e')||(Arr[i]=='i')||(Arr[i]=='o')||(Arr[i]=='u'))
			{
				return true;	
			}
			i++;
		}
		return false;	
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
