#include<stdio.h>
#include<stdlib.h>
#include<inttypes.h>
struct lst
{
    int a;
    struct lst *link;
};
struct lst *jk(struct lst *p,struct lst *n)
{
    return ((uintptr_t) (p) ^ (uintptr_t) (n));
}
struct lst *prev_node(struct lst *nbv,int b)
{
   if(nbv->link->a!=b)
     nbv=prev_node(nbv->link,b);
   return nbv;  
}
void create(struct lst *s,struct lst *p,struct lst *y)
{
    printf("Enter the Number:");
    scanf("%d",&s->a);
    if(s->a==-1)
    {
        y=prev_node(y,p->a);
        y->link=0;
    }
    else
    {
        struct lst *n;
        n=(struct lst *)malloc(sizeof(struct lst));
        s->link=jk(p,n);
        create(n,s,y);
    }
}
void main()
{
    struct lst *s;
    s=(struct lst *)malloc(sizeof(struct lst));
    create(s,0,s);
    printf("%d %d\n",s->a,s->link->a);

}
