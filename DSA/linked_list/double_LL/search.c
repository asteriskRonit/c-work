#include<stdio.h>
#include <stdlib.h>
struct st
{
    struct st *p;
    int a;
    struct st *n;
};
struct st * find(struct st *v,int q)
{
    if(v->a!=q)
    {
        v=find(v->n,q);
    }
    return v;
}
struct st *prev_node(struct st *u,int t)
{
    if(u->n->a!=t)
    {
        u=prev_node(u->n,t);
    }
     return u;
}
void create(struct st *k,struct st *yt)
{
   k->n=(struct st *)malloc(sizeof(struct st));
   printf("Enter the number:");
   scanf("%d",&k->n->a);
   if(k->n->a==-1)
   {
       k->n=NULL;
   }
   else
       create(k->n,yt);
    if(k!=yt)
      k->p=prev_node(yt,k->a);
}
void display(struct st *jk)
{
    if(jk->n!=NULL)
    {
        printf("%d--->>>",jk->a);
        display(jk->n);
    }
    else
     printf("%d\n",jk->a);
}
void main()
{
    struct st *pyt;
    pyt=(struct st *)malloc(sizeof(struct st));
    printf("enter -1 to stop\n");
    printf("Enter the number:");
    scanf("%d",&pyt->a);
    pyt->p=NULL;
    create(pyt,pyt);
    printf("\n-----printing the number-------\n");
    display(pyt);
}
