#include<stdio.h>
#define max 10
struct std
{
    int front;
    int data[max];
    int rear;
};
typedef struct std s;
void enqueue(int *d,int *c,int x[],int n)
{
   if(*d==max-1)
   {
       printf("queue is full\n");
   }
   else
   {
       if(*c==-1)
         *c=0;
       (*d)++;
       x[*d]=n;
   }
}
void dequeue(int *d,int *c)
{
    if(*d==-1)
    {
      printf("stack is empty\n");
    }
    else
    {
        (*c)++;
        if(*c>*d)
           *c=*d=-1;
    }  
}
void display(int *p,int *c,int x[])
{
   // printf("%d %d",p->front,p->rear);
    for(int i=*c;i<=*p;i++)
    {
        printf("%d ",x[i]);
    }
    printf("\n");
}
void main()
{
    struct std *b,k;
    b=&k;
    b->front=-1;
    b->rear=-1;
    for(int i=0;i<11;i++)
    {
        enqueue(&b->rear,&b->front,b->data,i);
    }    
    display(&b->rear,&b->front,b->data);
    dequeue(&b->rear,&b->front);
    display(&b->rear,&b->front,b->data);    
    enqueue(&b->rear,&b->front,b->data,99);
    display(&b->rear,&b->front,b->data);  
    
    
}