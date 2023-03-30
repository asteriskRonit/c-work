#include<stdio.h>
#include<stdlib.h>
//binary search
struct std
{
    int bn;
    struct std *lnk;
};
int count=0,c_out=0;
int *p;
int _search_(struct std *f,int y)
{
    static int g=0;
    if(g!=y)
    {
        g++;
        y=_search_(f->lnk,y);
    }
    else
    {
     g=0;
     return f->bn;
    }
    return y;
}
/*int *send(struct std *s,int j)
{
   static int i=0;
  if(i!=j)
  {
      i++;
      p=send(s->lnk,j);
  }
  else
  {
      i=0;
      return s->lnk;
  }
  return p;
}*/
void b_nsrch(struct std *kl,int key,int left,int right)
{
    if(left<=right)
    {
        int mid=(left+right)/2;
         //printf("%d %d %d %d\n",left,right,mid,_search_(kl,mid));
        if(key>_search_(kl,mid))
          b_nsrch(kl,key,mid+1,right);
        else if(key<_search_(kl,mid))
          b_nsrch(kl,key,left,mid-1);
        else{
            printf("%d key Found in %d node\n",key,mid+1);
            return;
        }  
    }
}   
void _find_(struct std *h,int num,float o,int *cs)
{
   if(num!=count)
   {
     if(o==h->bn)
       *cs=1;
     else
     {
        *cs=0;
       _find_(h->lnk,++num,o,cs);
     }
   }
}
void create(struct std *l,struct std *b)
{
    l->lnk=(struct std *)malloc(sizeof(struct std));
    printf("Enter The Number:");
    scanf("%d",&l->lnk->bn);
    if(l->lnk->bn==-1)
     l->lnk=NULL;
    else
    {
        count++;
        int c;
        _find_(b,0,l->lnk->bn,&c);
        if(c==1)
        {
            l->lnk=NULL;
            printf("Same content found core dumped\n");
            return;
        }
     else
     {
        c_out++;
       create(l->lnk,b);
     } 
    }
}
void display(struct std *k)
{
    if(k->lnk!=NULL)
    {
        printf("%d--->>>",k->bn);
        display(k->lnk);
    }
    else
     printf("%d\n",k->bn);
}
void main()
{
    struct std *m,*n;
    int key;
    m=(struct std *)malloc(sizeof(struct std));
    n=m;
    printf("Enter -1 to stop\n");
    printf("Enter the number:");
    scanf("%d",&m->bn);
    c_out++;
    create(m,m);
    printf("\n----After taking input----\n");
    display(m);
    printf("Enter the key that you want to find:");
    scanf("%d",&key);
      struct std *d;
    for(int i=0;i<c_out;i++)
    {
        for(int j=0;j<c_out-1;j++)
        {
          if(m->bn>m->lnk->bn)
          {
               d=m->lnk;
               m->lnk=m->lnk->lnk;
               m=d;
               m->lnk=n;
               if(count==0)
                 n=m;
               count++;  
          }
          m=m->lnk;   
        }
       m=n; 
       count=0;
    }
    printf("\n---After asc sorting---\n");
    display(m);
    b_nsrch(m,key,0,c_out);
    //printf("%d %d\n",m->bn,m->lnk->bn);


}
