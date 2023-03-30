#include<stdio.h>
#include<stdlib.h>
#define size 5
int front=-1,rear=-1,datta[size];
int isfull()
{
    if(front==rear+1||front==0&&rear==size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isempty()
{
    if(front==-1)
      return 1;
    return 0;  
}
void enqueue(int n)
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
    }

}