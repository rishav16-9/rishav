#include<stdio.h>
#include<conio.h>
#include<string.h>
union book
{
    int a;
    char name[20];
    float price;
}b;
void main()
{
    printf("enter integer value\n");
    scanf("%d",&b.a);
    printf("%d\n",b.a);
    printf("enter books name\n");
    scanf("%s",&b.name);
    printf("%s\n",b.name);
    printf("enter the price\n");
    scanf("%f",&b.price);
    printf("%f\n",b.price);
    getch();
}

