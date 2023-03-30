#include<stdio.h>
#include<stdlib.h>
struct tree
{
    int a;
    struct tree *l;
    struct tree *r;
};
struct tree *create()
{
  int x;
  printf("Enter the number:");
  scanf("%d",&x);
  if(x==-1)
   return NULL;
  struct tree *sos;
  sos=(struct tree *)malloc(sizeof(struct tree));
  sos->a=x;
  printf("Enter the left child of %d\n",x);
  sos->l=create();
  printf("enter the right child of %d\n",x);
  sos->r=create();
  return sos;
}  
void  lf_node(struct tree *mk)
{
    if(mk->l==NULL && mk->r==NULL)
    {
        printf("%d ",mk->a);
        return;
    }
    else
    {
      lf_node(mk->l);
      lf_node(mk->r);   
    }
}
void main()
{
    struct tree *kl;
    kl=create();
    lf_node(kl);
    printf("\n");
}