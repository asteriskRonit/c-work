#include<stdio.h>
void space(int f)
{
    for(;f>1;f--)
    {
        printf("  ");
    }
}
void column(int y)
{
    for(int i=0;i<2*y+1;i++)
    {
        printf(" *");
    }
}
void pattern(int r)
{
    for(int i=0;i<r;i++)
    {
        space(r-i);
        column(i);
        printf("\n");
    }
}
void main()
{
   int n=5;
   pattern(n);
}