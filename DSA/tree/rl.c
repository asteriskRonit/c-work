#include<stdio.h>
#include<stdlib.h>
struct tree
{
    int a;
    struct tree *l;
    int lp;
    struct tree *r;
    int rp;
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
void print_paths(int jkl[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",jkl[i]);
    }
    printf("\n");
}
void pathline(struct tree *y,int path[],int p_len)
{
    if(y==NULL)
      return;
    path[p_len]=y->a ;
    p_len++;
    if(y->l==NULL && y->r==NULL)
    {
        print_paths(path,p_len);
    }
    else
    {
        pathline(y->l,path,p_len);
        pathline(y->r,path,p_len);
    }
     
}
void root_leaf(struct tree *s)
{
   int road[1000];
   pathline(s,road,0);
}
void main()
{
  struct tree *t;
  t=create();
  root_leaf(t);
}
