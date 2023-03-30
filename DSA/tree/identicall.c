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
void display(struct tree *y)
{
   if(y==NULL)
   {
     printf("%d ",y->a);    
     return;
   }  
  
   display(y->l);
   display(y->r);  

}
struct tree * identical(struct tree *pass)
{
    if(pass==NULL)
     return;
    struct tree *u;
    u=(struct tree *)malloc(sizeof(struct tree));
    u->a=pass->a;
    u->l=identical(pass->l);
    u->r=identical(pass->r);

    return u; 
}
void main()
{
    struct tree *t,*k;
    t=create();
    display(t);
    printf("\n");
   // k=identical(t);
   // display(k);
   // printf("\n");


}