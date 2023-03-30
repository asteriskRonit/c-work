#include<stdio.h>
void hailstone(int a,int b)
{
    if(b!=0)
    {
        if(a%2==0)
        {
            a=a/2;
            printf("%d ",a);
        }
        else
        {
            a=3*a+1;
            printf("%d ",a);
        }
        hailstone(a,b-1);
        
    }
}
void main()
{
    int a=1,i=10,j=1;
    do
    {
        hailstone(j,i);
        printf("\n");
        j++;
    } while (j<10);
    
 
    
}