#include<stdio.h>
void main()
{
    /*int a[5]={1,9,3,4,5};
    int (*p)[5]=&a;
    //p++;
    printf("the adess of array is\n");
    for(int i=0;i<5;i++)
    {
        printf("%p\n",&a[i]);
    }
    printf("%p",*p);
    printf("\n%p\n",p);
    //*p++;
    printf("%d",*(*p+1));*/
    /*int b,c,d;
    printf("enter the dimension of array");
    scanf("%dx%d",&b,&c);
    int a[b][c];
    for(int i=0;i<b;i++)
    {   
        printf("enter the input of %d row:",i+1);
        for(int j=0;j<c;j++)
        {
          scanf("%d",&a[i][j]);
        }
    }
    printf("The output is......:\n");
    for(int i=0;i<b;i++)
    {   
        for(int j=0;j<c;j++)
        {
          d=0;
          for(int k=2;k<a[i][j]+1;k++)
          {
              if(a[i][j]%k==0)
              {
                  d++;
              }
          }
            if(d<3)
            {
                printf("%d",a[i][j]);
            }
        }
    }*/
    /*int *p,a[2][3]={{1,2,3},{4,6,8}};
    p=&a[0][0];
    for(int i=0;i<6;i++)
    {
        printf("%d",*(p+i));
    
        
    }*/
   /*int a[3]={1,9,3},*p;
   p=a;

   (*p)++;
   printf("%d",*p);
   int a[5]={1,11,111,1111,11111};
   int *p;
   *p=&a;
   printf("%d",*(p));*/
   int a;
   printf("enter the number:");
   scanf("%d",&a);
   /*if(a%4==0)
   {
      if(a%100==0)
      {
          if(a%400==0)
          {
              printf("not a leap year");
          }
          else
          {
              printf("leap year");
          }
      }
      else
      {
          printf("leap year");
      }
   }
   else
   {
       printf("Not a leap year");
   }*/
   if(a%100==0)
   {
       if(a%400==0)
       {
           printf("lp");
       }
       else
       {
           printf("not a leap yr");
       }

   }
   else{
       if(a%4==0)
       {
           printf("lp yr");
       }
       else
       {
           printf("nt lp yr");
       }
   }


   



    
    




}