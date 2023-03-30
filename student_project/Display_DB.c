#include<stdio.h>

void display_db()
{
    char N[10];
    int R;
    int M;
    int n,i;
    FILE *f1,*f2;
    f1=fopen("studdata.txt","r");
    f2=fopen("total.txt","r");
    fscanf(f2,"%d",&n);
    printf("\nStudents records:\n");
    printf("Rollno\tName\tMarks");
    printf("\n********************************");
    for(i=0;i<n;i++)
    {
        fscanf(f1,"%s",N);
        fscanf(f1,"%d",&R);
        fscanf(f1,"%d",&M);
        printf("\n%d\t%s\t%d",R,N,M);

    }
    fclose(f1);
    fclose(f2);
}
