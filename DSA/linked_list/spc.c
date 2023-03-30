#include<stdio.h>
#include<stdlib.h>
struct spl
{
    int data;
    struct spl *link;
};
void v(struct spl *s,struct spl *p)
{
    s->data=20;
    p->data=30;
}
void main()
{
    struct spl *d;
    d=(struct spl *)malloc(sizeof(struct spl));
    d->data=10;
    int *p,*e;
    int a=10,b=20;
    p=&a;
    printf("%d ",*p);
    e=&b; 
    printf("%d\n",*e);  
 
}