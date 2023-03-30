#include<stdio.h>
#include<stdlib.h>
struct dt
{
  int d;
  struct dt *mn;
};
int count=0;
typedef struct dt data;
int top=-1;
void _find_(data *h,int num,int o,int *cs)
{
  //  printf("%d  %d  %d    %d\n",o,h->d,num,count);
   if(num!=count)
   {
     //printf("%d  %d    %d   %d\n",o,num,count,h->d);
     if(o==h->d)
     {
       *cs=1;
       printf("Hello\n");
     }
     else
     {
        *cs=0;
       _find_(h->mn,++num,o,cs);
     }
   }

}
void display(data *dis)
{
  if(dis->mn!=NULL)
  {
    printf("%d--->>>",dis->d);
    display(dis->mn);
  }
  else
    printf("%d\n",dis->d);
}
void create(data *r,data *k)
{
  //display(k);
  r->mn=(data *)malloc(sizeof(data));
  printf("Enter the Number:");
  scanf("%d",&r->mn->d);
  if(r->mn->d==-1)
     r->mn=NULL;
  else
  {
    count++;
    //printf("%d\n",r->mn->d);;
     int c;
      //printf("%d\n", _find_(k,0,r->mn->d));
     _find_(k,0,r->mn->d,&c);
     if(c==1)
     {
       r->mn=NULL;
       printf("Same content found core dumped\n");
       return;
     }
     else
     {
       create(r->mn,k);
     }
  }
}
void insert(data *m)
{
  if()
}
void main()
{
  data *s;
  s=(data *)malloc(sizeof(data));
  printf("Enter -1 to stop\n");
  printf("Enter the number:");
  scanf("%d",&s->d);
//  count++;
  create(s,s);
  printf("\n------Printing the values------\n");
  display(s);
}
