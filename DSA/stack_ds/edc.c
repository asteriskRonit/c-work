#include<stdio.h>
#define max 3
void push(int stack[],int *top,int l)
{
   if(*top==max-1)
   {
       printf("stack is full\n");
   }
   else
   {
       *top+=1;
       stack[*top]=l;
       printf("%d inserted\n",l);
   }
}
int pop(int *top)
{
    if(*top==-1)
    {
      printf("Stack is empty\n");
      return 0;
    }
    *top-=1;
}
int display(int stack[],int top)
{
   if(top==-1)
   {
       printf("stack is empty\n");
       return 0;
   }     
   for(int i=top;i>=0;i--)
   {
       printf("%d\n",stack[i]);
   }
}
void main()
{
  int top=-1;
  int stack[max];
  for(;;)
  {
    printf("1.for push\n2.pop\n3.for display\n");
    int s;
    scanf("%d",&s);
    if(s!=0)
    {
        switch (s)
        {
            case 1:
            printf("Enter the number to push:");
            scanf("%d",&s);
            push(stack,&top,s);
            break;
            case 2:
            pop(&top);
            break;
            case 3:
            display(stack,top); 
            break;    
            default:
            printf("Enter vald no\n");
            break;
         }
    } 
    else
    {
        break;
    }    
  } 
}