import java.awt.*;
import java.awt.event.*;
class GUI7
{
	public static void main(String arg[])
	{
		MarvellousWindow mobj=new MarvellousWindow("First",500,500);	

	}
}
class MarvellousWindow extends WindowAdapter
{
	Frame fobj;
	public MarvellousWindow(String str, int x, int y)
	{
		fobj=new Frame(str);
		fobj.setSize(x,y);
		fobj.addWindowListener(this);
		fobj.setVisible(true);
	}
	public void windowClosing(WindowEvent obj)
	{
		System.exit(0);
	}

	
}