import java.awt.*;
import java.awt.event.*; 
import javax.swing.*;
class Calculator extends JFrame implements ActionListener
{
	JLabel l1, l2, l3;
	JButton b1, b2, b3, b4;
	JTextField t1, t2, t3;
	Calculator()
	{
		setSize(1000, 500);
		l1 = new JLabel(“Enter the first number: ”);
		l2 = new JLabel(“Enter the second number: ”);
		b1 = new JButton(“+”);
		b2 = new JButton(“-”);
		b3 = new JButton(“*”);
		b4 = new JButton(“/”);
		t1 = new JTextField();
		t2 = new JTextField();
		t3 = new JTextField();
		add(l1);
		add(l2);
		add(l3);
		add(b1);
		add(b2);
		add(b3);
		add(b4);
		add(t1);
		add(t2);
		add(t3);
		t1.setBounds(50,100,150,25);
		t2.setBounds(50,150,150,25);
		t3.setBounds(50,200,150,25);
		b1.setBounds(50,200,50,50);
		b2.setBounds(150,200,50,50);
		b3.setBounds(250,200,50,50);
		b4.setBounds(350,200,50,50);
		b1.addActionListener(this);
		b2.addActionListener(this);
		b3.addActionListener(this);
		b4.addActionListener(this);
		setVisible(true);
		setTitle(“CALCULATOR”);	
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
	public void actionPerformed(ActionEvent e)
	{
		String s1 = t1.getText();
		String s2 = t2.getText();
		if(e.getSource()==b1)
		{
			int n1 = Integer.parseInt(s1);
			int n2 = Integer.parseInt(s2);
			int sum = n1 + n2;
			t3.setText(sum + “ “);
		}
		else if(e.getSource()==b2)
		{
			int n1 = Integer.parseInt(s1);
			int n2 = Integer.parseInt(s2);
			int difference = n1 - n2;
			t3.setText(difference + “ “);
		}
		else if(e.getSource()==b3)
		{
			int n1 = Integer.parseInt(s1);
			int n2 = Integer.parseInt(s2);
			int product = n1 * n2;
			t3.setText(product + “ “);
		}
		else if(e.getSource()==b4)
		{
			int n1 = Integer.parseInt(s1);
			int n2 = Integer.parseInt(s2);
			int quotient = n1 / n2;
			t3.setText(quotient + “ “);
		}
}
class GUI
{
	public static void main(String args[])
	{
		Calculator c = new Calculator();
	}
}
