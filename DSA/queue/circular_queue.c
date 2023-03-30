#include<stdio.h>
#define size 5
int front=-1,rear=-1;
int data[size];
int isfull()
{
    if((front==rear+1)||(front==0&&rear==size-1))
      return 1;
    return 0;  
}
int isempty()
{
    if(front==-1)
      return 1;
    return 0;
}
void enqueue(int val)
{   
   if(isfull())
   {
       printf("queue is full\n");
   } 
   else
   {
       if(front==-1)
         front=0;
       rear=(rear+1)%size;
       data[rear]=val;  
   }
}
void dequeue()
{
    if(isempty())
    {
        printf("queue is empty\n");
    }
    else
    {
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else{
            front=(front+1)%size;
        }
    }
}
void main()
{
    for(int i=0;i<5;i++)
    {
        enqueue(i);
    }
    dequeue();
    enqueue(12);
    printf("%d",data[0]);
    int i;
    for(i=front;i!=rear;i=(i+1)%size)
    {
        printf("%d ",data[i]);
    }
    printf("%d",data[i]);
}