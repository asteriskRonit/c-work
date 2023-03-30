#include<stdio.h>
void add(int m)
{
   static d=0;
   if(m>=5)
   {
     int a;  
     printf("enter the number");
     scanf("%d",&a);
     d=d+a;
     printf("%d",d);
     m--;
     add(m);
   }
   
}
void main()
{
    int n=5;
    add(n);
}