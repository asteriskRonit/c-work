#include<stdio.h>
#include<stdlib.h>
//dividing
int count=0;
struct data
{
  int d;
  struct data *n;
};
typedef struct data l;
int size(l *p,int c)
{
  if(p->n!=NULL)
  {
    c++;
    c=size(p->n,c);
  }
  return c;
}
l *_dividing_(l *k,l *h,int j)
{
  //printf("%d\n",j);
  static int g=1;
  if(g!=j)
  {
    g++;
    h=_dividing_(k->n,h,j);
  }
  else
  {
    h=k->n;
    k->n=NULL;
    return h;
  }

}
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
//  printf("%d\n",size(s)/2);
  int j;
  j=size(s,1);
  printf("%d-\n",j);
  e=_dividing_(s,e,size(s,1)/2);
  printf("\n------Printing the values------\n");
  display(s);
  printf("\n------Printing the values------\n");
  display(e);
  //_rvspln_(s,e,-1);
  /*printf("\n------Printing the values After copying------\n");
  display(e);*/

}
