#include<stdio.h>
#include<stdlib.h>
#define size 5
int data[size],front=-1,rear=-1;
void enquue(int val)
{
     if(rear==size-1)
     {
         printf("queue is full\n");
         exit(1);
     }
     else
     {
         if(front==-1)
           front=0;
         rear++;
         data[rear]=val;
         printf("%d is inserted\n",val);
     }  
}
void dequeue()
{
    if(front==-1)
    {
        printf("Queue Is Empty\n");
    }
    else
    {
        printf("%d hasbeen deleted\n",data[front]);
        front++;
        if(front>rear)
           front=rear=-1;
    }
    
}
void display()
{
    if(rear==-1)
       printf("queue is empty\n");
    else
    {
        printf("------Displaying The elements-----\n");
        for(int i=front;i<=rear;i++)
        {
            printf("%d ",data[i]);
        }
        printf("\n");
    }
       
}
void main()
{
    for(int i=0;i<5;i++)
    {
        enquue(i);
    }
    display();
    dequeue();
    display();
    enquue(110);
    display();
    

}


