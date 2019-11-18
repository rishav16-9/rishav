#include<stdio.h>
#include<stdlib.h>
void insert();
void delete();
void display();
struct node
{
    struct node *next;
    int data;
};
struct node *front = NULL;
struct node *rear = NULL;
void main()
{
    int ch;
    while (1)
    {
        printf("1 insert the element");
        printf("\n2 delete");
        printf("\n3 display");
        printf("\nenter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: insert();
              break;
            case 2: delete();
            break;
            case 3: display();
            break;
            default: printf("invalid input");
            break;
        }
    }
}
void insert()
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter element");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(front==NULL&&rear==NULL)
    {
        front=rear=temp;
    }
    else{
        rear->next=temp;
        rear=temp;
    }

}
void delete()
{
    struct node* temp;
    temp=front;
    if(front==0&&rear==0)
        printf("\nempty");
    else
    {
        printf("%d",front->data);
        front=front->next;
        free(temp);
    }

}
void display()
{
    struct node* temp;
    if(front==0&&rear==0)
        printf("\nempty");
    else
    {
        temp=front;
        while(temp!=NULL)
        {
            printf("\n%d",temp->data);
            temp=temp->next;
        }
    }
}
