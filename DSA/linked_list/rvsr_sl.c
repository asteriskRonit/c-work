#include<stdio.h>
#include<stdlib.h>
//reverse
struct dsg
{
  float data;
  struct dsg *p;
};
typedef struct dsg H;
int count=0;

void _find_(H *h,int num,float o,int *cs)
{
   if(num!=count)
   {
     if(o==h->data)
       *cs=1;
     else
     {
        *cs=0;
       _find_(h->p,++num,o,cs);
     }
   }
}
void create(H *r,H *k)
{
  r->p=(H *)malloc(sizeof(H));
  printf("Enter the number:");
  scanf("%f",&r->p->data);
  if(r->p->data==-1)
   r->p=NULL;
  else
  {
    count++;
     int c;
      _find_(k,0,r->p->data,&c);
     if(c==1)
     {
       r->p=NULL;
       printf("Same content found core dumped\n");
       return;
     }
     else
       create(r->p,k);
  }
}
H * _rvspln_(H *l,H *q,int o)
{
  if(l->p!=NULL)
  {
    o++;
    q=_rvspln_(l->p,q,o);
  }
  q->data=l->data;
  if(o!=0)
  {
   q->p=(H *)malloc(sizeof(H));
   return q->p;
  }
  else
   q->p=NULL;
}
void display(H *dis)
{
  if(dis->p!=NULL)
  {
    printf("%.2f--->>>",dis->data);
    display(dis->p);
  }
  else
    printf("%.2f\n",dis->data);
}
void main()
{
  H *s,*e;
  s=(H *)malloc(sizeof(H));
  printf("------Enter -1 to stop-----\n");
  printf("Enter the number:");
  scanf("%f",&s->data);
  //count++;
  create(s,s);
  printf("\n------Printing the values------\n");
  display(s);
  e=(H *)malloc(sizeof(H));
  _rvspln_(s,e,-1);
  printf("\n------Printing the values After Reverse------\n");
  display(e);

}
