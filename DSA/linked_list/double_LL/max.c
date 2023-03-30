#include<stdio.h>
#include<stdlib.h>
int c;
struct std
{
    struct std *p;
    int a;
    struct std *n;
};
struct std *pre(struct std *f,int u)
{
    if(f->n->a!=u)
      f=pre(f->n,u);
    return f;  
}
void create(struct std *s,struct std *y)
{
    s->n=(struct std *)malloc(sizeof(struct std));
    printf("Enter the number:");
    scanf("%d",&s->n->a);
    if(s->n->a==-1)
      s->n=NULL;
    else
      create(s->n,y);
      if(s!=y)
        s->p=pre(y,s->a);  
}
void display(struct std *r)
{
    if(r->n!=NULL)
    {
        printf("%d-->>",r->a);
        display(r->n);
    }
    else
     printf("%d\n",r->a);
}
void m_x(struct std *j)
{
    if(j!=NULL)
    {
      if(j->a>c)
        c=j->a;
      m_x(j->n);  
    }

}
void main()
{
    struct std *h;
    h=(struct std *)malloc(sizeof(struct std));
    printf("Enter -1 to stop\n");
    printf("Enter the number:");
    scanf("%d",&h->a);
    h->p=NULL;
    create(h,h);
    display(h); 
    c=h->a;
    m_x(h->n);
    printf("\nThe max count is %d\n",c);
}