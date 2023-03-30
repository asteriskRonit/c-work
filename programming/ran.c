#include <stdio.h>
void main()
{
   /*int a,b,c,d,r,k;
   c=0;
   int i,j;
   i=0;
   b=0;
   d=1;
   k=0;
   for(int i=0;i<5;i++)
   {
      for(int j=0;j<i+1;j++)
      {
         b+=1;
         printf("%d ",b);
      
      
      }
       printf("\n");   
   }
   
   
printf("\n enter the number :");
scanf("%d",&a);
while(a>0)
{
  r=a%10;           
  for(i=0;i<3;i++)
  {
    d=d*r;
  }
  c=c+d;
  d=1;
  a=a/10;    
  
}
printf("%d",c);*/
  int count,a;
   printf("ENter the no");
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


}
