#include<stdio.h>
#include<stdlib.h>
struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
};
struct tree * create(int dt)
{
    struct tree *node=(struct tree *)malloc(sizeof(struct tree));
    node->data=dt;

    node->left=node->right=NULL;
    return node;
}
void main()
{
    struct tree ii,io;
    ii.data=120;
    ii.left=ii.right=NULL;
    io.data=160;
    io.left=ii.right=NULL;
    printf("%d\n",io.data);
}