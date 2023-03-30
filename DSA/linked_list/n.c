/* Linked List - May 14th 2021 (Drubajyoti Debnath) */

//#include "drb.h"
#include<stdio.h>
#include<stdlib.h>

typedef struct rawnode
{
    char name[10];
    int id;
    struct rawnode *link;
} node;
void showNode(node *data)
{
    if (data->link != NULL)
    {
        printf("\nID : %d\tname: %s\n", data->id,data->name);
        showNode(data->link);
    }
    else
        printf("\nID : %d\tname: %s\n", data->id,data->name);
}

void itterateAddNode(node *HEAD, node *current)
{
    if (HEAD->link != NULL)
        itterateAddNode(HEAD->link, current);
    else
        HEAD->link = current;
}

node *newNode(node *HEAD)
{
    node *temp;
    int inpRet, inpVal;
    printf("\nEnter the Number : ");
    scanf("%d", &inpVal);
    if(inpVal==-1)
        return HEAD;
    temp = (node *)malloc(sizeof(node));
    temp->id = inpVal;
    printf("Enter the Name : ");
    scanf("%s", temp->name);
    temp->link = NULL;
    if (HEAD == NULL)
        HEAD = temp;
    else
        itterateAddNode(HEAD, temp);
    return newNode(HEAD);
}

void main()
{
    node *a;
    printf("--- ( x to stop ) ---\n\n");
    a = newNode(NULL);
    printf("%p %p\n",a->link,a->link->link);
    printf("\n\nList is : \n");
    showNode(a);
    free(a);
    printf("\n%p %p\n",a->link,a->link->link);
    printf("\n\nAfter List is : \n");
    showNode(a);
}