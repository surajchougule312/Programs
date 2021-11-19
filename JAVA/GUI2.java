import java.awt.*;
class GUI2
{
	public static void main(String arg[])
	{
		MarvellousWindow mobj=new MarvellousWindow();	
		mobj.setSize(300,300);
		mobj.setVisible(true);
		mobj.setTitle("Marvellous");
	}
}
class MarvellousWindow extends Frame
{
	public MarvellousWindow()
	{
		super();
	}

}