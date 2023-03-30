#include<stdio.h>
void main()
{
    /*int r=10,n=r-1;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf(" ");
        }
        for(int k=0;k<2*i+1;k++)
        {
            printf("*");
        }
        printf("\n");
        n--;
    }
    n++;
    for(int i=r-2;i>=0;i--)
    {
        for(int j=0;j<=n;j++)
        {
            printf(" ");
        }
        for(int k=0;k<2*i+1;k++)
        {
            printf("*");
        }
        printf("\n");
        n++;
    }
    r=5;
    for(int i=0;i<r;i++)
    {
        if(i%2==0)
        {
            for(int j=5;j>i;j--)
            {
                printf("%d",j);
            }
            printf("\n");
        }
        else
        {
            for(int j=1;j<=r-i;j++)
            {
                printf("%d",j);
            }
            printf("\n");
        }
    }
    int a=71,b=0,l=0;
   for(int i=a;i>=65;i--)
   {

       for(int j=65;j<=i;j++)
       {
           printf("%c",j);
       }
       for(int k=0;k<l;k++)
       {
           printf(" ");
       }
       l=2*b+1;
       b++;
    
        if(i==a)
        { 
          for(int j=a-1;j>=65;j--)
          {
            printf("%c",j);
          }
           printf("\n");
           
        }  
        else
        {
          for(int j=a-1;j>=65;j--)
          {
            printf("%c",j);
          }
           printf("\n");
           a--;
        }
   }
   int r=68;
   for(int i=r;i>=65;i--)
   { 
       for(int e=r;e>i;e--)
       {
           printf(" ");
       }
       printf("*");
       for(int j=65;j<=i;j++)
       {
           printf("%c",j);
       }
       for(int k=i-1;k>=65;k--)
       {
           printf("%c",k);
       }
       printf("*");
       printf("\n");
      
   }*/
    int r=10;
    for(int i=1;i<=r;i++)
    {
        if(i%2!=0)
        {
            for(int j=r;j>=i;j--)
            {
           
                if(j%2==0)
                {
                  printf("@");
                }
                else
                {
                  printf("?");
                }
            }
            printf("\n");
        }
        else
        {
            for(int k=r;k>=i;k--)
            {
                printf("%d",k);
            }
            printf("\n");
        }
      
    }
      


}