#include<stdio.h>
#include<stdlib.h>
int count=0;
struct data
{
  int c;
  struct data *n;
};
typedef struct data d;
void _find_(d *h,int num,float o,int *cs)
{
   if(num!=count)
   {
     if(o==h->c)
       *cs=1;
     else
     {
        *cs=0;
       _find_(h->n,++num,o,cs);
     }
   }
}
void _COPy_(d *f,d *g)
{
  if(f->n!=NULL)
  {
    g->c=f->c;
    g->n=(d *)malloc(sizeof(d));
    _COPy_(f->n,g->n);
  }
  else
  {
     g->c=f->c;
     g->n=NULL;
  }
}
void create(d *j,d *k)
{
  j->n=(d *)malloc(sizeof(d));
  printf("Enter the number:");
  scanf("%d",&j->n->c);
  if(j->n->c==-1)
   j->n=NULL;
  else
  {
    count++;
     int b;
      _find_(k,0,j->n->c,&b);
     if(b==1)
     {
       j->n=NULL;
       printf("Same content found core dumped\n");
       return;
     }
     else
       create(j->n,k);
  }
}
void display(d *dis)
{
  if(dis->n!=NULL)
  {
    printf("%d--->>>",dis->c);
    display(dis->n);
  }
  else
    printf("%d\n",dis->c);
}
void main()
{
  d *s,*e;
  s=(d *)malloc(sizeof(d));
  printf("------Enter -1 to stop-----\n");
  printf("Enter the number:");
  scanf("%d",&s->c);
  create(s,s);
  printf("\n------Printing the values------\n");
  display(s);
  e=(d *)malloc(sizeof(d));
  _COPy_(s,e);
  printf("\n------Printing the values After copying------\n");
  display(e);

}
