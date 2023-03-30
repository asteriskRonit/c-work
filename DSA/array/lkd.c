#include<stdio.h>
#include<stdlib.h>
struct ai
{
    struct ai *n;
    int a;
    struct ai *m;
};
void print(struct ai *t)
{
    if(t->a!=0)
    {
        printf("%d ",t->a);
        print(t->m);
    }
}
void create(struct ai *k,struct ai *c,struct ai *v)
{
    printf("enter the number\n");
    scanf("%d",&c->a);
    if(c->a==0)
    {
        print(v);
    }
    else
    {
        k=c;
        c->m=(struct ai *)malloc(sizeof(struct ai));
        create(k,c->m,v);
    }
}
void main()
{
    struct ai *p;
    p=(struct ai *)malloc(sizeof(struct ai));
    printf("enter 0 to stop\n");
    create(NULL,p,p);
}