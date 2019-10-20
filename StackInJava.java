import java.util.Scanner;
class CreateStack
{
    int top;
    final int MAX=5;
    int a[]=new int[MAX];
    CreateStack()
    {
        top=-1;
    }
    void push(int ele)
    {
        if(top==MAX-1)
            System.out.println("Stack is Full");
        else
        {
            ++top;
            a[top]=ele;
        }
       /* else
        {
            int ele;
            System.out.println("enter element to be pushed");
            Scanner sc= new Scanner(System.in);
            ele=sc.nextInt();
            ++top;
            a[top]=ele;
        }*/
    }
    void pop()
    {
        int ele1;
        if (top==-1) {
            System.out.println("Stack Underflow");
        }
        else {
            //ele1=a[top--];
            System.out.println("deleted element="+a[top--]/*+ele1*/);
        }
    }
    void display()
    {
        if (top==-1)
        {
            System.out.println("stack undeflow");
        }
        else
        {
            int i;
            for (i = top; i>=0 ; i--)
            {
                System.out.println(a[i]);
            }
        }
    }
}
public class StackInJava
{
    public static void main(String args[])
    {
      /*  CreateStack s=new CreateStack();
        int ch;
        while (true)
        {
            System.out.println("1.push");
            System.out.println("2.pop");
            System.out.println("3.display");
            Scanner sw =new Scanner(System.in);
            ch=sw.nextInt();
            switch (ch)
            {
                case 1: s.push();
                break;
                case 2: s.pop();
                break;
                case 3: s.display();
                break;
            }
        }*/
      CreateStack s=new CreateStack();
      s.push(10);
      s.push(20);
      s.push(30);
      s.push(40);
      s.push(50);
      s.display();
      s.push(60);
      s.pop();
      s.pop();
      s.pop();
      s.pop();
      s.pop();
      s.pop();
      s.display();
    }
}