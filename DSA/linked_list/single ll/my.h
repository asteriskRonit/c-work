#include<stdlib.h>
#include<stdio.h>
struct dt
{
    int n;
    struct dt *p;
};
typedef struct dt d;
int count(d *k)
{ 
    static int c=0;
    if(k->p!=NULL)
    {
        c++;
        c=count(k->p);
    }
    return c;
    
}
int create(d *c)
{

    printf("Enter the number:");
    scanf("%d",&c->n);
    if(c->n==0)
    {
        c->p==NULL;
        return 0;
    }
    else
    {
       c->p=(d *)malloc(sizeof(d));
       create(c->p);
    }
}
