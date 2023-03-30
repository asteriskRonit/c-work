#include<stdio.h>
#include<stdlib.h>
struct std
{
    int n;
    struct std *p;
};
typedef struct std b;
void main()
{
    b *l,*q,*s;
    l=(b *)malloc(sizeof(b));
    printf("Enter the data:");
    scanf("%d",&l->n);
    l->p=(b *)malloc(sizeof(b));
    q=l->p;
    printf("Enter the data:");
    scanf("%d",&q->n);
    q->p=(b *)malloc(sizeof(b));
    s=q->p;
    printf("Enter the data:");
    scanf("%d",&s->n);
    s->p=NULL;   
    printf("%d %d %d\n",l->n,l->p->n,l->p->p->n);
}