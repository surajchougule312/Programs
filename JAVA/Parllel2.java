class Parllel2
{
	public static void main(String arg[])
	{
		System.out.println("Thread name is:"+Thread.currentThread().getName());
		Demo obj1=new Demo();
		Demo obj2=new Demo();

		obj1.setName("First");
		obj2.setName("Second");
		obj1.start();
		obj2.start();
	}
}
class Demo impliments Runnable //extends thread
{
	public void run()
	{
		for(int i=0;i<1000;i++)
		{
			System.out.println("Inside-:"+Thread.currentThread().getName()+":"+i);
		}
	}
}