public class Main implements Runnable
{
    static Thread Producer =new Thread()
    {
        public synchronized void run()
        {
            try
            {
                for(int i=0;i<5;i++)
                {
                    System.out.println("produced"+i);
                    notify();
                    wait(1000);
                    Thread.sleep(1000);
                }
            }
            catch(Exception e)
            {
                System.out.println("Exception"+e);
            }
        }
    };
    static Thread Consumer =new Thread()
    {
        public synchronized void run()
        {
            try
            {
                for(int i=0;i<5;i++)
                {
                    System.out.println("Consumer"+i);
                    notify();
                    //wait(1000);
                    Thread.sleep(1000);
                }
            }
            catch(Exception e)
            {
                System.out.println("Exception"+e);
            }
        }
    };
    public static void main(String args[])
    {
        try
        {
            Producer.start();
            Consumer.start();
        }
        catch(Exception e)
        {
            System.out.println("Exception"+e);
        }
    }
    public void run()
    {
        System.out.println("running");                          
    }
}