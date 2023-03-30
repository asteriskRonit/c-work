#include<stdio.h>
#include<stdlib.h>
struct ds
{
    struct ds *kl;
    int data;
    struct ds *link;
};
typedef struct ds o;
void print(o *p)
{
    if(p->link!=NULL)
    {
        printf("%d ",p->data);
        print(p->link);
    }
    else
    {
        return;
    }
}
void create(o *l,o *k)
{
   scanf("%d",&l->data);
   if(l->data==0)
   {
       printf("Error\n");
       l->link=NULL;
       return;      
   }
   else
   {
       l->link=(o *)malloc(sizeof(o));
       l=l->link;
       create(l,k);
   }
}
void main()
{
  /* o *p;
   p=(o *)malloc(sizeof(o));
   printf("Enter 0 to stop\n");
   create(p,p);
   print(p);*/
   o *p,*d;
   p=(o *)malloc(sizeof(o));
   p->kl=NULL;
   p->data=10;
   p->link=(o *)malloc(sizeof(o));
   d=p->link;
   d->kl=p;
   d->data=20;
   d->link=NULL;
   printf("%d %d",p->link->data,d->kl->data);
   




}