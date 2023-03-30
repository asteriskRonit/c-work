#include<stdio.h>
struct stud1
{
    char name[10];
    int roll;
    int marks;
};

void search_db()
{
    int n,i,c=0,R;
    struct stud1 *s;
    FILE *f1,*f2;
    f1=fopen("studdata.txt","r");
    f2=fopen("total.txt","r");
    fscanf(f2,"%d",&n);
    s=(struct stud1 *)malloc(n*sizeof(struct stud1));
    for(i=0;i<n;i++)
    {
        fscanf(f1,"%s",s[i].name);
        fscanf(f1,"%d",&s[i].roll);
        fscanf(f1,"%d",&s[i].marks);
    }
    printf("\nEnter rollno to search:");
    scanf("%d",&R);
    for(i=0;i<n;i++)
    {
        if(R==s[i].roll)
        {
            printf("\nRecord found.");
            printf("\nRoll= %d",s[i].roll);
            printf("\nName= %s",s[i].name);
            printf("\nMarks= %d",s[i].marks);
            c++;
        }
    }
    if(c==0)
    {
        printf("\nRecord not found.");
    }
    fclose(f1);
    fclose(f2);
}
