#include<stdio.h>
#define mk(s) #s;
int sum(int a,int b)
{
    return a+b;
}
void main()
{  
   

}  

    
 





        //infinite palindrome proess
   /* int a,k,sum;
    for(;;)
    {
     printf("Enter the number");
     int v= scanf("%d",&a);
     k=a;
     sum=0;
     if(v!=0)
     {
        for(;a!=0;a/=10)
        {
             sum=sum*10+(a%10);
        }
        if(sum==k)
        {
             printf("%d is palindrome number\n",k);
        }
        else
        {
            printf("%d is not palindrome number\n",k);
        }
     }
     else
     {
         printf("terminated....\n");
         break;
     }   */



         //dynamic palindrome process
    /*int a,b,j,sum;
    printf("enter the number");
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        j=i;
        sum=0;
        for(;j!=0;j/=10)
        {
            sum=sum*10+(j%10);
        }
        if(i==sum)
        {
            printf("%d is palindrome number\n",i);
        }
        else
        {
            printf("%d is not a palindrome number\n",i);
        }*/

         //dynamic armstrong process
    /*
    printf("Enter the number:");
    scanf("%d",&a);
    k=a;
    for(;a!=0;a/=10)
    {
       b++;
    }
    a=k;
    for(;k!=0;k/=10)
    {
        r=k%10;
        mul=1;
        for(int j=0;j<b;j++)
        {
          mul=mul*r;
        }
        sum+=mul;
    }
    if(a==sum)
    {
        printf("%d Armstrong number\n",a);
    }
    else
    {
        printf("%d is not armstrong number\n",a);
    }   


        int a,b,sum,mul,k,r;
    for(;;)
    {   //infinite armstrong process
        printf("enter the number:");
        int v=scanf("%d",&a);
        sum=0;
        b=0;
        if(v!=0)
        {
            k=a;
            for(;k!=0;k/=10)
            {
                b++;
            }
            k=a;
            for(;a!=0;a/=10)
            {
                mul=1;
                r=a%10;
                for(int j=0;j<b;j++)
                {
                    mul=mul*r;
                }
                sum+=mul;
            }
            if(sum==k)
            {
                printf("%d is an armstrong number\n",k);
            }
            else
            {
                printf("%d is not an armstrong number\n",k);
            }
        }
        else
        {
            break;
        }
    }*/