#include<stdio.h>
//#define max 10
struct fgh
{
    int front;
    //int data[max];
    int rear;
};
//typedef struct fgh br;
/*void enqueue(int n,int *s)
{
    br *p;
    if(*s==max-1)
    {
        printf("Queue is full\n");
    }
    else
    {
        if(p->front==-1)
           p->front=0;
        (*s)++;
        p->data[*s]=n;   
    }  
}
void dequeue(int *s)
{
   br *p;
   if(p->front==-1)
   {
     printf("queue is empty\n");
   }
   else
   {
       p->front++;
   }   
}*/
/*void display(br *p)
{
    printf("%d %d",p->front,p->rear);
}*/
void main()
{
   struct fgh *l;
   l->front=-1;
   l->rear=-1;
   printf("%d %d",l->front,l->rear);
   //display(l);
}