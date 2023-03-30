#include<stdio.h>
/*void fib(int a,int b,int n)
{
    int c;
    if(n-2!=0)
    {
        c=a+b;
        printf("%d\n",c);
        n--;
        fib(b,c,n);
    }
}
void no_count(int a,int b)
{
    if(a!=0)
    {
      b++;
      a/=10;
      no_count(a,b);
    }
    else
    {
        printf("%d\n",b);
    }
    
}
void sum_digit(int a)
{
    static b=0;
    if(a!=0)
    {
        b=b+a%10;
        a/=10;
        sum_digit(a);
    }
    else
    {
        printf("%d\n",b);
    }
    
}
void gcd(int a,int b,int c)
{
    
    if(c!=0)
    {
        if(a%c==0&&b%c==0)
        {
            goto l1;
        }
        c--;
        gcd(a,b,c);
    }
    else
    {
        l1:printf("%d",c);
    }
    
    

}
void prime(int a)
{
    static c=1;
    static d;
    if(c<=a)
    {
        if(a%c==0)
        {
            d++;
        }
        c++;
        prime(a);
    }
    else
    {
        if(d!=2)
        {
            printf("%d is not a prime no\n",a);
        }
        else
        {
            printf("%d is prime_no\n",a);
        }
        
    }
    
}*/
int add(int a,int b)
{
    //static int c=0;
    if(a<b)
    {
       return a+add(a+1,b);
    }
    else
    {
        return a;
    }
    
}
void main()
{
    /*int a=1,b=2,c;
    printf("%d\n%d\n",a,b);
    for(int i=0;i<3;i++)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }*/
   // fib(1,2,10);
   //no_count(2390,0);
   //sum_digit(100);
   //gcd(10,25,10);
   /*int a;
   printf("enter the number");
   scanf("%d",&a);
   prime(a);*/
   int a;
   a=add(1,5);
  // b=add(10);
   printf("%d",a);
}