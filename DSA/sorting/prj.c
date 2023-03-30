#include<stdio.h>
#include<stdlib.h>
struct student
{
    char c[20];
    int roll;
    struct atribute
    {
        int english;
        int sst;
        int science;
        int maths;
        int Gk;
    }marks;
};   
typedef struct student nyc;
void main()
{
    nyc cr[20];   
    int n=2,i;
    FILE *f,*j;
   /* f=fopen("records.txt","a");
    if(f==NULL)
    {
        printf("Error!\n");
        exit(1);
    }
    printf("Enter the records\n");

    for(int i=0;i<n;i++)
    {
        printf("Enter the Name:");
        scanf("%s",cr[i].c);
        printf("Enter The Roll Number:");
        scanf("%d",&cr[i].roll);
        printf("Enter the marks\nENGLISH:");
        scanf("%d",&cr[i].marks.english);
        printf("Social Science:");
        scanf("%d",&cr[i].marks.sst);
        printf("Sience:");
        scanf("%d",&cr[i].marks.science);
        printf("Maths:");
        scanf("%d",&cr[i].marks.maths); 
        printf("GK:");
        scanf("%d",&cr[i].marks.Gk); 
    }
     for(int i=0;i<2;i++)
     {
    /*  printf("Enter the name roll and age:");
      scanf("%s %d %d",c,&n,&m);
      fprintf(f,"%s %10d %10d %5d %5d %5d %5d\n",cr[i].c,cr[i].roll,cr[i].marks.english,cr[i].marks.sst,cr[i].marks.science,cr[i].marks.maths,cr[i].marks.Gk);
     } 
     fclose(f);*/
     char k[100];
     j=fopen("rj.txt","r");
     while (fscanf(j,"%s %s %s",k)==1)
     {
         printf("%s\n",k);
     }
     fclose(j);
     {
         /* code */
     }
     
   /*  for(i=0;i<n;i++)
     {
         printf("%s\n",k[i]);
     }*/
}