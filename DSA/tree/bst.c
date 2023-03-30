#include<stdio.h>
#include<stdlib.h>
struct base
{
    struct base *t;
    int n;
    struct base *l;
};
typedef struct base b;

int inorder(b *r)
{
    if(r==NULL)return;
        printf("%d ",r->n);
    inorder(r->t);

    inorder(r->l);
}
b *create(int val)
{
    b *s;
    s=(b *)malloc(sizeof(b));
    s->n=val;
    s->t=NULL;
    s->l=NULL;
    return s;
}
b *insert_left(b *h,int val)
{
    h->t=create(val);
    return h->t;
}
b *insert_right(b *h,int val)
{
    h->l=create(val);
    return h->l;
}
void bst(b *j,int val,int y)
{
   if(j!=NULL)
   {
       if(j->n<val)
       {
          if(j->t==NULL)
          {
            insert_left(j,val);
          }
          else
          {
              bst(j->t,val,y);
          }
       }
        if(j->n>val)
       {
          if(j->l==NULL)
          {
            insert_right(j,val);
          }
          else
          {
              bst(j->l,val,y);
          }
       }
   }
}
void main()
{
   b *s;

   s=(b *)malloc(sizeof(b));
      s->n=29;
   int a[10]={90,22,188,78,65,55};
   for(int i=0;i<6;i++)
   {
       bst(s,a[i],0);
   }
   inorder(s);


}