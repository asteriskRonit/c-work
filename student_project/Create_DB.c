#include<stdio.h>
struct stud
{
    char name[10];
    int roll;
    int marks;
};
void create_db()
{
    int n,i;
    FILE *f1,*f2;
    f1=fopen("studdata.txt","w");
    f2=fopen("total.txt","w");
    struct stud *s;
    printf("\nEnter no of students:");
    scanf("%d",&n);
    s=(struct stud *)malloc(n*sizeof(struct stud));
    printf("\nEnter students records:\n");
    for(i=0;i<n;i++)
    {
        printf("\nEnter student name:");
        scanf("%s",s[i].name);
        printf("\nEnter rollno:");
        scanf("%d",&s[i].roll);
        printf("\nEnter marks:");
        scanf("%d",&s[i].marks);
    }
    fprintf(f2,"%d",n);
    for(i=0;i<n;i++)
    {
        fprintf(f1,"%s\n",s[i].name);
        fprintf(f1,"%d\n",s[i].roll);
        fprintf(f1,"%d\n",s[i].marks);
    }
    printf("\nData saved....");
    fclose(f1);
    fclose(f2);

}
