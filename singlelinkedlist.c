#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};
struct node* root=NULL;
void append(void);
void addatbegin(void);
/*void addafter(void);*/
int length(void);
void display(void);
void delet(void);
int len;
void main()
{
    int ch;
    while(1)
    {
        printf("single linked list operation\n");
        printf("1 append\n");
        printf("2 add at begin\n");
        printf("3 add after\n");
        printf("4 length\n");
        printf("5 display\n");
        printf("6 delete\n");
        printf("7 Quit");
        printf("\nEnter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:append();
            break;
            case 2: addatbegin();
            break;
           /* case 3: addatafter();
            break;*/
            case 4: len=length();
            printf("%d",len);
            break;
            case 5: display();
            break;
            case 6: delet();
            break;
            case 7: exit(0);
            break;
            default :printf("\nInvalid Choice");
        }

    }
}
void append()
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\nenter node data:");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root==NULL)//list is empty
        root=temp;
    else
    {
        struct node *p;
        p=root;
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;
    }
}
int length()
{
    int count=0;
    struct node* temp;
    temp=root;
    while(temp!=NULL)
    {
        count++;
        temp=temp->link;
    }
    return count;
}
void display()
{
    struct node* temp;
    temp=root;
    if(temp==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d-->",temp->data);
            temp=temp->link;
        }
        printf("\n\n");
    }
}
void addatbegin()
{
    int data;
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&data);
    if(root=NULL)
    {
        temp->link=NULL;
        root=temp;
    }
    else
    {
        temp->data=data;
        temp->link=root;
        root=temp;
        printf("data inserted successfully");
    }
}
void addafter()
{

}
void delet()
{

}
