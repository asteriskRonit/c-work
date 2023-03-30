#include <stdio.h>
#include<stdlib.h>
#define max 10
int count=0;
struct bass
{
    int items[max];
    int top;
};
typedef struct bass bs;
void Empty_stck(bs *b)
{
    b->top=-1;
}
int full(bs *b)
{
    if(b->top==max-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int empty(bs *b)
{
    if(b->top==max-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }    
}
void push(bs *s,int n)
{
    if(full(s))
    {
        printf("stack is full\n");
    }
    else
    {
        s->top++;
        s->items[s->top]=n;
        count++;
    }

}
void pop(bs *s)
{
    if(empty(s))
    {
      printf("\nstack is empty\n");
    }
    else
    {
        printf("item popped %d",s->items[s->top]);
        s->top--;
    }
    count--;
    printf("\n");
}
void print_stck(bs *s)
{
   for(int i=0;i<count;i++)
       printf("%d ",s->items[i]);

    printf("\n");   
}
void main()
{
    bs *b;
    int i=0;
    b=(bs *)malloc(sizeof(bs));
    Empty_stck(b);
    i=0;
    do
    {
        push(b,i);
        i++;
    } while (i<10);
    //pop(b);
    pop(b);
    print_stck(b);


}