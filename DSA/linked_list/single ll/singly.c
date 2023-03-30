#include<stdio.h>
#include<stdlib.h>
struct std_atri
{
  int dt;
  struct data *poi;
};
void create(struct data *j)
{
  j->poi=(struct data *)malloc(sizeof(struct data));
  printf("Enter the number:");
  scanf("%d",&j->poi->dt);
  if(j->poi->dt==-1)
   j->poi=NULL;
  else
    create(j->poi);
}
void display(struct data *dis)
{
  if(dis->poi!=NULL)
  {
    printf("%d--->>>",dis->dt);
    display(dis->poi);
  }
  else
    printf("%d\n",dis->dt);
}
void main()
{
   struct data *d,*k;
   d=(struct data *)malloc(sizeof(struct data));
   k=d;
   printf("------Enter -1 to stop-----\n");
   printf("Enter the number:");
   scanf("%d",&d->dt);
   create(d);
   printf("\n------Printing the values------\n");
   /*for(;d->poi!=NULL;d=d->poi)
      printf("%d-->",d->dt);
   printf("%d\n",d->dt);*/
   display(d);
}
