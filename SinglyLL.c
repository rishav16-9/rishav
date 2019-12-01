/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    int data;
    struct node *link;
};
struct node *root=NULL;
void insertatbeg();
void insertatend();
void deleteatbeg();
void deleteatlast();
void display();
void insertatpos();
int length();
void main()
{
    int ch;
    while (1)
    {
        printf("\n1Insert at beg");
        printf("\n2Insert at end");
        printf("\n3delete at beg");
        printf("\n4delete at end");
        printf("\n5display");
        printf("\n6Insert at Location");
        printf("\n7Length ");
        printf("\nenter choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: insertatbeg();
            break;
            case 2: insertatend();
            break;
            case 3: deleteatbeg();
            break;
            case 4: deleteatlast();
            break;
            case 5: display();
            break;
            case 6: insertatpos();
            break;
            case 7: length();
            break;
            default: printf("Invalid Input");
        }
    }
}
void insertatend()
{
    struct node *temp,*p;
    p=root;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter data");
    scanf("%d",&temp->data);
    if (root==NULL)
    {
        root=temp;
    }
    else
    {
        while (p->link!=NULL)
        {
            p= p->link;
        }
        p->link=temp;        
    }
}
void insertatbeg()
{
     struct node *temp;
     root=temp;
     temp=(struct node *)malloc(sizeof(struct node));
     printf("Enter data");
     scanf("%d",&temp->data);
     if (root==NULL)
     {
         root=temp;
     }
     else
     {
         temp->link=root;
         root=temp;
     }
}
void deleteatlast()
{
    struct node *temp,*p;
    temp = p =root;
    if(root ==NULL)
    {
        printf("Empty");
    }
    else
    {
        while(p->link->link!=NULL)
        {
            p=p->link;
        }
        temp=p->link;
        p->link=NULL;
        free(temp);
    }  
}
void deleteatbeg()
{
    struct node *temp;
    temp =root;
    if(root ==NULL)
    {
        printf("Empty");
    }
    else
    {
        root=temp->link;
        temp->link=NULL;
        free(temp);
    }
}
void display()
{    
    struct node *temp;
    temp =root;
    if (temp==NULL)
    {
        printf("Empty");
    }
    else
    {
        while (temp!=NULL)
        {
        printf("%d-->",temp->data);
        temp=temp->link;
        }
    }
}
void insertatpos()
{
    int i=1,loc,len;
    struct node *temp,*p;
    p=root;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&temp->data);
    temp->link=NULL;
    printf("Enter location to be inserted");
    scanf("%d",&loc);
    len=length();
    if(loc>len)
    {
        printf("Invalid");
    }
    else
    {
        while(i<loc-1)
        {
            p=p->link;
            i++;
        }
        temp->link=p->link;
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
}*/

