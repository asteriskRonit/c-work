#include<stdio.h>
void main()
{
    //Summation processing of prime number
   int count,a;
   printf("Enter the no:");
   scanf("%d",&a);
   a++;
   for(;;)
   {
       count=0;
       for(int i=1;i<=a;i++)
       {
           if(a%i==0)
           {
               count++;
           }
        
       }
       if(count==2)
       {
           printf("%d",a);
           break;
       }
       a++;
   }   
   printf("\n");
       
   
}
