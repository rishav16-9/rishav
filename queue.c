#include<stdio.h>
#define CAP 5
int rear=0,front=0,i;
int q[CAP];
void insert();
void delet();
void display();
void main()
{
    int ch;
    while(1)
    {
        printf("1. inert\n");
        printf("2.delete\n");
        printf("3.display\n");
        printf("enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert();
            break;
            case 2:delet();
                break;
            case 3:display();
                break;
            default:
                printf("invalid");
                break;
        }
    }
}
void insert()
{
    if (CAP==rear)
    printf("queue is full\n");
    else
    {
        int ele;
        printf("enter element\n");
        scanf("%d",&ele);
        q[rear]=ele;
        rear++;
    }
}
void delet()
{
    if (front==0&&rear==0)
    {
        printf("queue is empty\n");

    }
    else
    {
        printf("delete the element %d\n",q[front]);
        for(i=0;i<rear-1;i++)
        {
            q[i]=q[i+1];
        }
        rear--;
    }
}
void display()
{
    if (front==0&&rear==0)
    {
        printf("queue is empty\n");

    }
    else
    {
        printf("the element in the queue are :\n");
        for(i=0;i<CAP;i++)
            printf("%d\n",q[i]);

    }

}
