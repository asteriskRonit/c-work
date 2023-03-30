#include<stdio.h>
#include<stdlib.h>
struct std
{
    int a;
    struct std *kl;
};
int cou=101;
void create(struct std *f)
{
    cou--;
    f->a=cou;
    if(cou==1)
      f->kl=NULL;
    else
    {
        f->kl=(struct std *)malloc(sizeof(struct std));
        create(f->kl);
    }  
}
void display(struct std *l)
{
    static int u=0;
    if(l->kl!=NULL)
    {
        u++;
        printf("%d ",l->a);
        if((u)%10==0)
          printf("\n\n");
        display(l->kl);
    }
    else
    {
     printf(" %d\n",l->a);
     u=0;
    } 
}
void main()
{
  struct std *jk;
  jk=(struct std *)malloc(sizeof(struct std));
  create(jk);
  display(jk);
  printf("\n\n");
  display(jk);
}