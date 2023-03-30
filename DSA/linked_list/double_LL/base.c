#include<stdio.h>
#include<stdlib.h>
struct st
{
    struct st *p;
    int a;
    struct st *n;
};
struct st *prev_node(struct st *u,int t)
{
    if(u->n->a!=t)
    {
        u=prev_node(u->n,t);
    }
     return u;
}
struct st *last_node(struct st *r)
{
    if(r->n!=NULL)
      r=last_node(r->n);
    return r;  
}
void bck_trk(struct st *yu)
{
    if(yu->p!=NULL)
    {
        printf("%d--->>>",yu->a);
        bck_trk(yu->p);
    }
    else
     printf("%d\n",yu->a);
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
        printf("%d👉",jk->a);
        display(jk->n);
    }
    else
     printf("%d\n",jk->a);
}
void main()
{
     struct st *po;
    
     po=(struct st *)malloc(sizeof(struct st));
     printf("Enter -1 to stop\n");
     printf("Enter the number:");
     scanf("%d",&po->a);
     po->p=NULL;
     printf("%p\n",po->p);
     create(po,po);
     printf("\n-----printing the number-------\n");
     display(po);
    // printf("%p %p %p\n",last_node(po),last_node(po)->p,last_node(po)->p->p);
     printf("\n-----printing the number in reverse-------\n");
     bck_trk(last_node(po));
}