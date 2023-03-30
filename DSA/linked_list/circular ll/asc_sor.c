#include<stdio.h>
#include<stdlib.h>
struct btb
{
    int n;
    struct btb *v;
};
void create(struct btb *jk)
{
   jk->v=(struct btb *)malloc(sizeof(struct btb));
   printf("Enter the number:");
   scanf("%d",&jk->v->n); 
  if(jk->v->n==-1)
      jk->v=NULL;
  else
    create(jk->v);    
}
void display(struct btb *y)
{
    if(y->v!=NULL)
    {
        printf("%d--->>>",y->n);
        display(y->v);
    }
    else
     printf("%d\n",y->n);
}
void main()
{
   struct btb *k,*j,*n;
   k=(struct btb *)malloc(sizeof(struct btb));
   n=k;
//    printf("Enter -1 to stop\n");
   printf("ENter the number");
   scanf("%d",&k->n);
   create(k);
   printf("\n------Printing the value------\n");
   display(k);
   int c=0;
   for(int i=0;i<4;i++)
   {
       j=k->v;
      // printf("%d",k->n);
       for(int f=i+1;f<5;f++)
       {
           //printf("---->>>>%d",j->n);
           if(k->n>j->n)
           {
               k->v=j->v;
               j->v=k;
               //display(j);
           }
           if(c==0)
           {
            n=j;
           display(n);
           c++;
           } 
           j=j->v; 
       }
    
       printf("\n");
       k=k->v;
   }
   k=n;
   display(k);
}