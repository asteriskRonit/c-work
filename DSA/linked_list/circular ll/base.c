#include<stdio.h>
#include<stdlib.h>
struct bsl
{
    int d;
    struct bsl *p;
};
int __search__(struct bsl *lk,int cv,int n)
{
  static int i=0;
  if(i!=n)
  {
      if(lk->d==cv)
      {
          i=0;
          return 1;
      }
      else
      {
          i++;
          __search__(lk->p,cv,n);
      }
  }
  else
  {
       i=0;
      return 0;
     
  }
}
struct bsl *_pre_v_node_(struct bsl *g,int o)
{
  if(g->p->d!=o)
  {
     g=_pre_v_node_(g->p,o);
     return g;
  }
  else
    return g;

}
struct bsl *ln(struct bsl *s,struct bsl *k)
{
   if(s->p!=k)
   {
       s=ln(s->p,k);
   }
   return s;
}
struct bsl *__find__(struct bsl *k,int u)
{
    if(k->d!=u)
    {   
        k=__find__(k->p,u);
        return k;
    }
    else 
     return k;
}
void reverse_trav(struct bsl *k,struct bsl *tp)
{
    if(k->p!=tp)
    {
        printf("%d---->>>",k->d);
        reverse_trav(k->p,tp);
    }
    else
    {
        printf("%d\n",k->d);
    }
}
void _create_(struct bsl *dl_b,struct bsl *k_o)
{
    static int r=0;

    l:dl_b->p=(struct bsl *)malloc(sizeof(struct bsl));
    printf("Enter the number:");
    scanf("%d",&dl_b->p->d);
    if(dl_b->p->d==-1)
    {
     dl_b->p=k_o;    
                        
    } 
    else
    {
         r++;
        if(__search__(k_o,dl_b->p->d,r))
        {
          printf("\nsame content found \n");
          free(dl_b->p);
          r--;
          goto l;
        }
        else
          _create_(dl_b->p,k_o);
    } 
}
struct bsl  *_insert_(struct bsl *op)
{
    struct bsl *e;
    e=op;
    int t,ro;
    struct bsl *s;
    s=(struct bsl *)malloc(sizeof(struct bsl));
    printf("Enter the number you want to insert:");
    scanf("%d",&s->d);
    printf("enter the unique number:");
    scanf("%d",&t);
    __find__(op,t);
    if(ln(op,op)==__find__(op,t))
    {
        printf("Do you want to make it root node[1/0]:");
        scanf("%d",&ro);
        if(ro==1)
        {
            op=__find__(op,t);
            s->p=op->p;
            op->p=s;
            return s;
        }
    }
    op=__find__(op,t); 
    s->p=op->p;
    op->p=s;
}
void _display_(struct bsl *t,struct bsl *y)
{
   if(t->p!=y)
   {
       printf("%d--->>>",t->d);
       _display_(t->p,y);
   }    
   else
   {
       printf("%d--->>>%d\n",t->d,t->p->d);
   }
}
struct bsl *delete(struct bsl *klm)
{
    struct bsl *lk;
    lk=klm;
    printf("enter the unique number:");
    int t;
    scanf("%d",&t);
    if(t==klm->d)
    {
        ln(lk,lk)->p=klm;
        lk=klm->p;
        free(klm);
        printf("%d\n",lk->d);
        klm=lk;
        
    }
    else
    {
        struct bsl *j;
        klm=_pre_v_node_(klm,t);
        printf("%d\n",__find__(lk,t)->d);
        j=__find__(lk,t);
        klm->p=j->p;
        //printf("%d %dn",lk->d,lk->p->d);
        klm=lk;
        free(__find__(lk,t));
        
    }
    return klm;   
}

void main()
{
    struct bsl *f;
    f=(struct bsl *)malloc(sizeof(struct bsl));
    printf("Enter -1 to stop\n");
    printf("Enter the number:");
    scanf("%d",&f->d);
    _create_(f,f);
    printf("\n-----printing the value------\n");
    _display_(f,f);
    printf("\n-----printing the value reverse------\n");
    reverse_trav(ln(f,f),ln(f,f));
    //printf("%d",_insert_(f)->d);
    f=_insert_(f);
    printf("\n-----printing the value------\n");
    _display_(f,f);
}