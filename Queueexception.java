/*import java.util.*;
import java.lang.Throwable;
class Queue extends Exception
{
    Queue (String s)
    {
        super(s);
    }
}
class Linear
{
    final int cap=5;
    int front = -1 , rear = -1  , i ;
    int q[]=new int[cap];
    void insert(int x) throws Queue
    {
        try
        {
            if (rear==cap)
            {
                 throw new Queue ("Queue is Full");
            }
            else if(front==-1&&rear==-1)
            {
                front=0;
                rear=0;
                q[rear]=x;
                rear++;
            }
            else {
                q[rear] = x;
                rear++;
            }
         }
        catch(Queue e)
        {
            System.out.println(e.getMessage());
        }
    }
    void delete() throws Queue
    {
        try
        {
            if (front==-1&&rear==-1)
                throw new Queue("Queue is Empty");
            else
            {
                //i=q[front];
                //front++
                System.out.println("Deleted element ="+q[front]);
                for(i=0;i<rear-1;i++)
                {
                    q[i]=q[i+1];
                }

                rear--;//System.out.println("deleted element ="+i);
            }
        }
        catch(Queue e)
        {
            System.out.println(e.getMessage());
        }
    }
    void display() throws Queue
    {
        for(i=0;i<cap;i++)
            System.out.println(q[i]);
    }
}
public class Queueexception
{
    public static void main(String args[]) {
        Linear l=new Linear();
        try {
            l.insert(10);
            l.insert(20);
            l.insert(30);
            l.insert(40);
            l.insert(50);
            l.display();
            l.insert(60);
            l.delete();
            l.delete();
            l.delete();
            l.delete();
            l.delete();
            l.delete();
        }
        catch(Queue e)
        {
            System.out.println();
        }


    }
}*/
