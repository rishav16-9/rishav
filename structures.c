#include<stdio.h>
#include<conio.h>
struct student
{
    float p,c,m;
};
void main()
{
    struct student s[100];
    int i,n;
    printf("enter number of students");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter marks");
        printf("physics");
        scanf("%f",&s[i].p);
        printf("chemistry");
        scanf("%f",&s[i].c);
        printf("maths");
        scanf("%f",&s[i].m);
    }
    printf("printing details");
    for(i=0;i<n;i++)
    {
        printf("physics=%f",s[i].p);
        printf("chemistry=%f",s[i].c);
        printf("maths=%f",s[i].m);
    }
}
