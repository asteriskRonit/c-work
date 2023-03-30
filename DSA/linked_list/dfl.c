#include<stdio.h>
#include<stdlib.h>
//mixed data
struct df
{
    int k;
    int n;
    float p;
    struct df *lk;
};
void create(struct df *g)
{
  g->lk=(struct df *)malloc(sizeof(struct df));
  printf("press 1 for int input\npress 0 for float input\n");
  scanf("%d",&g->lk->k);
  if(g->lk->k==1)
  {
      printf("Enter the number:");
      scanf("%d",&g->lk->n);
  }
  else if(g->lk->k==0)
  {
      printf("Enter the number:");
      scanf("%f",&g->lk->p); 
  }
  else if(g->lk->k==-1)
  {
     g->lk=NULL;
     return;
  }

  if(g->lk->n==-1||g->lk->p==-1)
     g->lk=NULL;
  else
  {
    create(g->lk);
  }   
}
void display(struct df *dis)
{
    if(dis->lk!=NULL)
    {
       if(dis->k==1)
          printf("%d--->>>",dis->n);
        else
          printf("%.2f--->>>",dis->p);  
        display(dis->lk);  
    }
    else
    {
        if(dis->k==1)
          printf("%d\n",dis->n);
        else
          printf("%.2f\n",dis->p); 
    }
}
void main()
{
   struct df *lg;
   lg=(struct df *)malloc(sizeof(struct df));
   printf("press 1 for int input\npress 0 for float input\n");
   scanf("%d",&lg->k);
   if(lg->k==1)
   {
      printf("Enter the number:");
      scanf("%d",&lg->n);
   }
   else
   {
      printf("Enter the number:");
      scanf("%f",&lg->p); 
   }
   create(lg);
   printf("\n----Printing the values----\n");
   display(lg);



}