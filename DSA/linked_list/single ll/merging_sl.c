#include<stdio.h>
#include<stdlib.h>
//merging
int count=0;
struct data
{
  int d;
  struct data *n;
};
typedef struct data l;
void _find_(l *h,int num,float o,int *cs)
{
   if(num!=count)
   {
     if(o==h->d)
       *cs=1;
     else
     {
        *cs=0;
       _find_(h->n,++num,o,cs);
     }
   }
}
void create(l *j,l *k)
{
  j->n=(l *)malloc(sizeof(l));
  printf("Enter the number:");
  scanf("%d",&j->n->d);
  if(j->n->d==-1)
   j->n=NULL;
  else
  {
    count++;
     int c;
      _find_(k,0,j->n->d,&c);
     if(c==1)
     {
       j->n=NULL;
       printf("Same content found core dumped\n");
       return;
     }
     else
       create(j->n,k);
  }
}
l *Lst_Node(l *k)
{
  if(k->n!=NULL)
    k=Lst_Node(k->n);
  return k;
}
void _Merging_(l *o,l *f)
{
  o=Lst_Node(o);
  o->n=f;
}
void display(l *dis)
{
  if(dis->n!=NULL)
  {
    printf("%d--->>>",dis->d);
    display(dis->n);
  }
  else
    printf("%d\n",dis->d);
}
void main()
{
  l *s,*e;
  s=(l *)malloc(sizeof(l));
  printf("------Enter -1 to stop-----\n");
  printf("Enter the number:");
  scanf("%d",&s->d);
  create(s,s);
  printf("\n------Printing the values------\n");
  display(s);
  count=0;
  e=(l *)malloc(sizeof(l));
  printf("------Enter -1 to stop-----\n");
  printf("Enter the number:");
  scanf("%d",&e->d);
  create(e,e);
  printf("\n------Printing the values------\n");
  display(e);
//  printf("%d\n",size(s)/2);
  _Merging_(e,s);
  printf("\n------Printing the values After merging------\n");
  display(e);
  //_rvspln_(s,e,-1);
  /*printf("\n------Printing the values After copying------\n");
  display(e);*/

}
