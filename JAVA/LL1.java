import java.util.*;

class LL1
{
	public static void main(String arg[])
	{
		ArrayList<Integer> obj=new ArrayList<Integer>();

		obj.add(10);
		obj.add(20);
		obj.add(30);

		System.out.println("Data from linked list");
		System.out.println(obj);
		obj.add(1,55);

		Iterator <Integer> iobj=obj.iterator();
		System.out.println("Data from linked list using iterator is");
		int iCnt=0; 
		while(iobj.hasNext())
		{
			/*no=iobj.hasNext();
			iSum=iSum+no;*/
			int no=iobj.hasNext();
			if(no%2==0)
			{
				iCnt++;
			}
			System.out.println(iobj.next());
		}
		obj=null; 
	}
}


