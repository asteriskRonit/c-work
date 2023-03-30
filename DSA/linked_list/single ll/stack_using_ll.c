#include<stdio.h>
#include<stdlib.h>
struct dd
{
    int n;
    struct dd *p;
};
typedef struct dd d;
#define max 6
int c=0,top=-1;
d *push(int l,d *t)
{   
    if(c==max-1)
    {
       printf("Stack is full\n");
       t->p=NULL;
       return;
    }
    if(top==-1)
      top=0;
    t->n=l;
    t->p=(d *)malloc(sizeof(d));
    t=t->p;
    c++;    
    return t;
}
int display(d *j)
{
    if(c==0)
    {
        printf("stack empty\n");
        return;
    }
   for(;j->p!=NULL;j=j->p)
   {
       printf("%d ",j->n);
   }
   printf("\n");
}
int count(d *l)
{
    int c=0;
    for(;l->p!=NULL;l=l->p)
    {
        c++;
    }
    return c;
}
void pop(d *l)
{
    int y=count(l);
    int i=0;
    for(;l->p!=NULL;l=l->p)
    {
        if(i==y-1)
        {
          l->p=NULL;
          break;
        }
        i++;
    }
    c--;
}
void main()
{
   d *k,*j;
   k=(d *)malloc(sizeof(d));
   j=k;
   for(int i=0;i<4;i++)
   {
       k=push(i,k);
   }
   k=j;
   display(j);

   j=k;
   pop(k);
   pop(k);
   pop(k);
   pop(k);
   display(j);
   // printf("%d ",k->n);
   printf("\n");


   


    
}