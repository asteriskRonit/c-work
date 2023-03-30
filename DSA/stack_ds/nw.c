#include<stdio.h>
#define max 5
int data[max],top=-1,count=-1,to=0;
void push(int n)
{
    if(to==max-1)
    {
        printf("stack is full\n");
    }
    else
    {
       if(top==-1)
          top=0;
       count++;   
       data[count]=n;
       to++;
    
    }
    
}
void pop()
{
    if(top==-1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        top++;
        to--;
        if(top>=count)
         top=-1;
    }
    
}
void display()
{
    for(int i=top;i<=count;i++)
    {
        printf("%d ",data[i]);
    }
    printf("\n");
}
void main()
{
  for(int i=0;i<6;i++)
  {
      push(i);
  }
  display();
  pop();
  display();
  push(10);
  display();
  push(20);
  display();

}