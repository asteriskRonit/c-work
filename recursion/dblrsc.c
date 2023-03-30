#include<stdio.h>
/*void addition(int a,int b);
{
    if()
}*/
void power(int a,int c,int d,int e)
{
    if(c!=0)
    {
        d=d*a;
        c--;
        power(a,c,d,e);
       // printf("%d\n",d);
    }
    else
    {
       e=d+e;
       printf("%d",e);
    }   
}
void segmentation(int a,int c)
{
    if(a!=0)
    {
        power(a%10,c,1,0);
        a=a/10;
        segmentation(a,c);
    }
}
void num_digit(int a,int c,int d)
{
    if(a!=0)
    {
        c++;
        num_digit(a/10,c,d);
    }
    else
    {
        //printf("%d\n",c);
        segmentation(d,c);
    }   
}
void main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    num_digit(n,0,n);
}
