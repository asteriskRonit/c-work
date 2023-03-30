#include<stdio.h>
#define size 5
struct sd
{
    int no;
    int pri;
};
typedef struct sd s;
s b[size];
int front=-1,rear=-1;
void swap(int *n,int *m,int *h,int *k)
{
    int t=*n;
    *n=*m;
    *m=t;
    t=*k;
    *k=*h;
    *h=t;
}
void order()
{
    for(int i=front;i<rear-1;i++)
    {
        for(int y=i+1;y<rear;y++)
        {
            if(b[i].pri<b[y].pri)
            {
               swap(&b[i].no,&b[y].no,&b[i].pri,&b[y].pri);
            }
        }
    }
}
void enqueue(int val,int v)
{
    if(rear==size-1)
    {
        printf("Queue is full\n");
    }
    else
    {
        if(front==-1)
          front=0;
        rear++;
        b[rear].no=val;
        b[rear].pri=v;
        order();  
    }
}
void dequeue()
{
    if(front==-1)
    {
       printf("queue is empty\n");
    }
    else
    {
        if(front==rear)
        {
            front=rear=-1;
        }
        front++;

    }
}
void display()
{
    if(front==-1)
    {
        printf("queue is empty\n");
        return 0;
    }
    for(int i=front;i<=rear;i++)
    {
      printf("%d ",b[i].no);
    }
}
void main()
{
    enqueue(10,1);
    enqueue(20,0);
    enqueue(12,90);
    enqueue(23,3);
    enqueue(78,110);
    //enqueue(120,510);
    //display();
    dequeue();
    display();
}
