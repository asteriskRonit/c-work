#include<stdio.h>
#include<stdlib.h>
struct std
{
    int bn;
    struct std *lnk;
};
void create(struct std *l,struct std *b)
{
    l->lnk=(struct std *)malloc(sizeof(struct std));
    printf("Enter The Number:");
    scanf("%d",&l->lnk->bn);
    if(l->lnk->bn==-1)
     l->lnk=NULL;
    else
    {
       create(l->lnk,b);
    }    
}
void display(struct std *k)
{
    if(k->lnk!=NULL)
    {
        printf("%d\t--->>>",k->bn);
        display(k->lnk);
    }
    else
     printf("%d\t\n",k->bn);
}
void main()
{
   struct std *m,*q;
   m=(struct std *)malloc(sizeof(struct std));
   printf("Enter -1 to stop\n");
   printf("Enter the number:");
   scanf("%d",&m->bn);  
   create(m,m);
   display(m);
   q=m;
   q->bn=20;
    display(m);
}