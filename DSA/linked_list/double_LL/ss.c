#include<stdio.h>
#include<stdlib.h>
struct s_l
{
   int a;
   struct s_l *p;
};
int size(struct s_l *o)
{
    static int b=1;
    if(o->p!=NULL)
    {
        b++;
        b=size(o->p);
    }
    return b;
}
struct s_l *find(struct s_l *op,int i,int d)
{
    if(d!=i)
        op=find(op->p,i,++d);
    return op;
}
void create(struct s_l *s)
{
    s->p=(struct s_l *)malloc(sizeof(struct s_l));
    printf("Enter the number:");
    scanf("%d",&s->p->a);
    if(s->p->a==-1)
      s->p=NULL;
    else
      create(s->p);
}
void display(struct s_l *k)
{
    if(k->p!=NULL)
    {
        printf("%d-->>>",k->a);
        display(k->p);
    }
    else
     printf("%d\n",k->a);
}
void main()
{
    struct s_l *kl,*j;
    kl=(struct s_l *)malloc(sizeof(struct s_l));
    printf("Enter -1 to stop\nEnter the number:");
    scanf("%d",&kl->a);
    create(kl);
    display(kl);  
   
    int n=size(kl);
     printf("%d\n",n);
    /*j=find(kl,1,0);
    printf("%d ",j->a); 
    printf("\n"); */
    for(int i=0;i<n-1;i++)
    {
        struct s_l *q,*t;
        q=find(kl,i,0);
        for(int j=i+1;j<n;j++)
        {
            t=find(kl,j,0);
            printf("%d--->>%d   ",q->a,t->a);
            if(q->a>t->a)
            {
                int g=q->a;
                q->a=t->a;
                t->a=g;
            }
            
           // printf("%d--->>%d\n",q->a,t->a);
        }
         display(kl);
    }
    printf("\n----After sorting---\n");
    display(kl);
    
    
}