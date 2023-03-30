#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct vertex
{
    char status[10];
    int data;
    struct vertex *link;
};
struct edge
{
    int info;
    struct edge *lonk;
};
void create(struct vertex *ver)
{
    ver->link=(struct vertex *)malloc(sizeof(struct vertex));
    printf("Enter the data:");
    scanf("%d",&ver->link->data);
    if(ver->data==-1)
    {
        ver->link=NULL;
        return;
    }
    else
    {

    }
}
void main()
{
   
}