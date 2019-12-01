#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *llink;
    struct node *rlink;
};
struct node *root=NULL;
void insertatbeg();
void insertatend();
void deleteatbeg();
void deleteatlast();
void display();
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
            default: printf("Invalid Input");
        }
    }
}
void insertatbeg()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&temp->data);
    temp->rlink=NULL;
    temp->llink=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        temp->rlink=root;
        root->llink=temp;
        root=temp;
    }
}
void insertatend()
{
    struct node *temp,*p;
    p=root;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&temp->data);
    temp->rlink=NULL;
    temp->llink=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        while (p->rlink!=NULL)
        {
            p=p->rlink;
        }
        temp->llink=p;
        p->rlink=temp;
    }
}
void deleteatbeg()
{
    struct node *temp;
    temp=root;
    if (root==NULL)
    {
        printf("Empty");
    }
    else
    {
        root=temp->rlink;
        root->llink=NULL; 
        temp->rlink=NULL;
       // temp->rlink->llink=NULL;  
        free(temp);
    }
}
void deleteatlast()
{
  struct node *temp,*p;
  temp=p=root;  
  if(root==NULL)
  {
      printf("Empty");
  }
  else
  {
      while (p->rlink->rlink!=NULL)
      {
          p=p->rlink;
      }
      temp=p->rlink;
      p->rlink=NULL;
      temp->llink=NULL;
      free(temp);
  } 
}
void display()
{
    struct node*temp;
    temp=root;
    if(root==NULL)
    {
        printf("Empty");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d-->",temp->data);
            temp=temp->rlink;
        }
    }
}
