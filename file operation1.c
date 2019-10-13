#include<stdio.h>
#include<conio.h>
struct stud
{
    char name[20];
    int usn;
    int sem;
}s;
void main()
{
    int n,i;
    FILE *fp;
    fp=fopen("students detail.txt","w");
    if(fp==NULL)
    {
        printf("check the location\n");
    }
    else
    {
        printf("enter number of students\n");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            printf("enter the details of the students\n");
            scanf("%s%d%d",s.name,&s.usn,&s.sem);
            fprintf(fp,"name:%s\n usn number:%d\nsemester:%d\n",s.name,s.usn,s.sem);

        }
        fclose(fp);
        printf("check the documents in given path. Thank You.\n");
    }
    char ch;
    fp=fopen("students detail.txt","r");
    if (fp==NULL)
    {
        printf("check the name given");
    }
    else
    {

        ch=getc(fp);
        while(ch!=EOF)
        {
            printf("%c",ch);
            ch=fgetc(fp);
        }
        fclose(fp);
    }
getch();
}
