#include<stdio.h>
#include<stdlib.h>
struct std
{
  int a;
  struct std *f;
}*df,*sf;
struct std *prev()
{
  if(df->f!=NULL)
   df=df->f;
}

void create()
{
  int t;
  printf("Enter the number:");
  scanf("%d",&t);
  if(t==-1)
  {
    df=sf;
    prev()->f=NULL;
  }
  else
  {
    df->f=(struct std *)malloc(sizeof(struct std));
    df->f->a=t;
    df=df->f;
    create();
  }
}
void _display_(struct std *h)
{
  if(h->f!=NULL)
  {
    printf("%d-->>",h->a);
    _display_(h->f);
  }
  else
    printf("%d\n",h->a);
}
void main()
{
  df=(struct std *)malloc(sizeof(struct std));
  sf=df;
  printf("Enter -1 to stop\n");
  create();
  df=sf;
  _display_(df->f);
}
