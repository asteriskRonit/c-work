#include<stdio.h>
#include<stdlib.h>

struct std
{
    char c[10];
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
       printf("Enter the name:");
       scanf("%s",l->lnk->c);
       create(l->lnk,b);
    }   
    
}
void display(struct std *k)
{
    if(k->lnk!=NULL)
    {
        printf("%d\t%s--->>>",k->bn,k->c);
        display(k->lnk);
    }
    else
     printf("%d\t%s\n",k->bn,k->c);
}
void main()
{
   struct std *m;
   m=(struct std *)malloc(sizeof(struct std));
   printf("Enter -1 to stop\n");
   printf("Enter the number:");
   scanf("%d",&m->bn); 
   printf("Enter the name:");
   scanf("%s",m->c);     
   create(m,m);
   display(m);
   free(m);
   display(m);
}