#include<stdio.h>
/*void cl(int c)
{
    if(c!=0)
    {
        printf("# ");
        cl(c-1);
    }
}
void d(int a,int c)
{
     if(a!=0)
     {
         printf("# ");
         cl(c);
         c++;
         printf("\n");
         d(a-1,c);
     }  
}
void main()
{
    d(3,0);
}*/
int sq(int a,int add,int b)
{
    if(a!=0)
    {
      add=add+a;
      printf("%d",a);
      b=sq(a-1,add,b); 
           
    }
    else
    {
        printf("the addition is %d\n",add);
    }
    if(a==10) 
    {
        if(b!=0)
        {
            printf("the subtraction is %d\n",b);
        }
    } 
    return b-a;
}
void main()
{
    int B=sq(10,0,2);
    printf("%d\n",B);
}