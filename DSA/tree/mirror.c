#include<stdio.h>
#include<stdlib.h>
struct tree
{
    int a;
    struct tree *l;
    struct tree *r;
};
typedef struct tree t;
t *create()
{
    int x_c;
    printf("Enter the number:");
    scanf("%d",&x_c);
    if(x_c==-1)
      return NULL;
    t *y;
    y=(t *)malloc(sizeof(t));
    y->a=x_c;
    printf("Enter the value for left node of %d\n",y->a);
    y->l=create();
    printf("Enter the value for right node of %d\n",y->a);
    y->r=create();

    return y;
}
t *mir_tree(t *s)
{
    if(s==NULL)
     return NULL;
    t *j;
    j=(t *)malloc(sizeof(t));
    j->a=s->a;
    j->l=mir_tree(s->r);
    j->r=mir_tree(s->l);
    return j; 
}
void display(t *u)
{
    if(u==NULL)
     return;
    display(u->l);
    printf("%d ",u->a);
    display(u->r); 
}
void main()
{
    t *k,*b;
    k=create();
    display(k);
    printf("\n");
    b=mir_tree(k);
    display(b);
    printf("\n");
}

