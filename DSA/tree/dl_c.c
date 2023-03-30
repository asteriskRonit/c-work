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
void delete(struct tree *ui)
{
    if(ui==NULL)
     return;
    delete(ui->l);
    delete(ui->r);
    free(ui); 
}
void display(struct tree *y)
{
   if(y==NULL)
   {
     return;
   }  
   printf("%d ",y->a);   
   display(y->l);
   display(y->r);  

}
void main()
{
    struct tree *r;
    r=create();
    delete(r);
    //printf("%d\n",r->a);
    display(r);
}