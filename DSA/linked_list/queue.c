#include <stdio.h>
#include<stdlib.h>
#define max 5
struct ds
{
	int n;
	struct ds *p;
};
typedef struct ds g;
int front=-1,rear=-1;
g *enqueue(g *k,int y)
{
   if(rear==max-1)
   {
   	   printf("Stack is full.\n");
       k->p=NULL;
       return 0;
   }
   if(front==-1)
   	 front=0;
   k->n=y;	
   k->p=(g *)malloc(sizeof(g));
   k=k->p;
   rear++;
   return k;
}
int display(g *u)
{
	if(u->p==NULL)
		return 0;
	printf("%d ",u->n);
	display(u->p);

}
void main()
{
 	g *l,*h;
    l=(g *)malloc(sizeof(g));
    h=l;
    for (int i = 0; i < 6; i++)
    {
    	l=enqueue(l,i);
    }
    display(h);
    
}