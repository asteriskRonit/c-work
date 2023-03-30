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
int count(t *d,int e)
{
  if(d==NULL)
    return e;
  else
  {
      e++;
      e=count(d->l,e);
      e=count(d->r,e);
      return e;
  }  
}
void main()
{
    t *i;
    i=create();
    int h=count(i,0);
    printf("%d ",h);
}