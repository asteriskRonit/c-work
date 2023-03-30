#include<stdio.h>
#include<stdlib.h>
#define max 5
int top=-1;
struct df
{
    int n;
    struct df *p;   
};
typedef struct df d;
void length(d *f)
{
  int d=0;
  for(;f->p!=NULL;f=f->p)
  {
    d++;
  }
  printf("%d\n",dl);
}
d *push(d *r,int l)
{
    if(top==max-1)
    {
       printf("stack is full\n");
       r->p=NULL;
    }
    else
    {
      top++;
      r->n=l;
      r->p=(d *)malloc(sizeof(d));
      return r->p;
    }
}
void pop(d *g)
{
    int k=0;
    if(top==-1)
    {
       printf("stack is empt\n");
    }
    else
    {
      d *o;
      for(;g->p!=NULL;g=g->p)
      {
          if(d==top)
          {
              free(g);
          }
         k++;
      }
      top--;
    }
}
void main()
{
    d *q,*s;
    q=(d *)malloc(sizeof(d));
    s=q;
    for(int i=0;i<5;i++)
      q=push(q,i);
    q=s; 
    pop(q); 
    for(;q->p!=NULL;q=q->p)
    {
        printf("%d ",q->n);
    } 
    //length(q);
    printf("\n");
      
      d *o;/////////

}