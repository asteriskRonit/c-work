#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
char stack[SIZE];
int top=-1;
void push(char c)
{
    if(top>=SIZE-1)
    {
        printf("stack is full\n");
    }
    else
    {
        stack[++top]=c;
    }
}
void pop()
{
  char t;
  if(top<0)
  {
      printf("stack is empty\n");
  }
  else
  {
     t=stack[top];
     top--;
     return t;   
  }
  
}
int presedence(char symbol)
{
    if(symbol=='^')
        return 3;
    else if(symbol=='*'||symbol=='/')
        return 2;
    else if(symbol=='+'||symbol=='-')
        return 1;
    else
        return 0;            
}
void main()
{

}
