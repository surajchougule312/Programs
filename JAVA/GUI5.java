import java.awt.*;
class GUI5
{
	public static void main(String arg[])
	{
		MarvellousWindow mobj=new MarvellousWindow("First",500,500);	
	
	}
}
class MarvellousWindow extends Frame
{
	Button b1;
	TextField t1;

	public MarvellousWindow(String str, int x, int y)
	{
		super();
		setTitle(str);
		setSize(x,y);
		b1=new Button("Submit");
		t1=new TextField();
		b1.setBounds(50,50,100,50);
		t1.setBounds(50,150,100,50);
		add(b1);
		add(t1);
		setLayout(null);

		setVisible(true);
	}

}