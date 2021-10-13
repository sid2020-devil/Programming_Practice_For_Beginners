class Threads extends Thread
{
	public void run()
	{
		for(int i=0;i<5;i++)
		System.out.println(Thread.currentThread().getName()+i);
	}
}
class Thread1
{
	public static void main(String args[])throws InterruptedException
	{
	Threads n = new Threads();
	Threads m = new Threads();
	Threads l = new Threads();
	n.setName("sila");
	n.join();
	m.setName("lila");
	l.setName("nila");
	n.start();
	m.start();
	l.start();
	
	
	}
}
