#include<stdio.h>
#define size 5
int top=-1,data[size];
void push(int n)
{
    if(top==size-1)
    {
        printf("stack is full");
    }
    else
    {
        top++;
        data[top]=n;
    }
}
void pop()
{
  if(top==-1)
  {
      printf("stack is empty\n");
  }   
  else
  {
      top--;
  }
}
void display()
{
    printf("-------displaying elements----------\n");
    for(int i=top;i>=0;i--)
    {
        printf("%d ",data[i]);
    }
    printf("\n");
}
void main()
{

   for(int i=1;i<6;i++)
   {
       push(i);
   }
   display();
   pop();
   push(10);
   display();
}