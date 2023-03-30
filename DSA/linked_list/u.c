#include<stdio.h>
#include<stdlib.h>
struct spl
{
    float data;
    struct spl *link;
};
int __search__(struct spl *lk,float cv,int n)
{
  static int i=0;
  if(i!=n)
  {
      if(lk->data==cv)
      {
          i=0;
          return 1;
      }
      else
      {
          i++;
          __search__(lk->link,cv,n);
      }
  }
  else
  {
       i=0;
      return 0;
     
  }
}
struct spl *_pre_v_node_(struct spl *g,float o)
{
  if(g->link->data!=o)
  {
     g=_pre_v_node_(g->link,o);
     return g;
  }
  else
    return g;

}
struct spl * _find_(float num,struct spl *m)
{
    if(m->data!=num)
    {
      m=_find_(num,m->link); 
      return m;
    } 
    else
    {
      printf("Found\n");
      return m;
    }  
 
}
void _display_(struct spl *dis)
{
    if(dis->link!=NULL)
    {
        printf("%.2f--->>>",dis->data);
        _display_(dis->link);
    }
    else
     printf("%.2f\n",dis->data);
}
void _create_(struct spl *dl_b,struct spl *k_o)
{
    static int r=0;

    l:dl_b->link=(struct spl *)malloc(sizeof(struct spl));
    printf("Enter the number:");
    scanf("%f",&dl_b->link->data);
    if(dl_b->link->data==-1)
    {
     dl_b->link=NULL;    
                        
    } 
    else
    {
         r++;
        if(__search__(k_o,dl_b->link->data,r))
        {
          printf("\nsame content found \n");
          free(dl_b->link);
          r--;
          goto l;
        }
        else
          _create_(dl_b->link,k_o);
    } 
}
struct spl * insert(float p,struct spl *k)
{
    int t;
    struct spl *s,*d;
    s=(struct spl *)malloc(sizeof(struct spl));
    printf("1.to insert in top\n2.insert in middle\n3.insert in end\n");
    scanf("%d",&t);
    if(t==1)
    {
        printf("Enter the number you want to store:");
        scanf("%f",&s->data);
        s->link=k;
        return s;
    }
    else if(t==2)
    {
        //struct spl *kl;
        float y;
        printf("Enter the unique number:");
        scanf("%f",&y);
        d=_find_(y,k);
        _display_(k);
        printf("%.2f\n",d->data);
        printf("Enter the number you want to store:");
        scanf("%f",&s->data);
        s->link=d->link;
        d->link=s;
    }
    return k;
}
void delete(struct spl *hi)
{
  struct spl *k;
  float t;
  printf("\nEnter the number u want to delete:");
  scanf("%f",&t);
  k= _find_(t,hi);
  hi=_pre_v_node_(hi,t);
  hi->link=k->link;
  free(k);
  /*if(_find_(t,k))
  {
     printf("found in\n");
  }
  else
  {
    printf("Not found\n");
  }*/


}
void main()
{
  struct spl *nyc;
  nyc=(struct spl *)malloc(sizeof(struct spl));
  printf("Enter -1 to stop the process\n");
  printf("Enter the number:");
  scanf("%f",&nyc->data);
  _create_(nyc,nyc);
  printf("\n-------Displaying-------\n");
  _display_(nyc);
   nyc=insert(2.3,nyc);;
   printf("\n-------Displaying After insert-------\n");
   _display_(nyc);
   delete(nyc);
   printf("\n-------Displaying After delete-------\n");
   _display_(nyc);


}