#include<stdio.h>
void main()
{
  /*factorial_no(5);
  /*int n;
  printf("how many bit u want : ");
  scanf("%d",&n);
  int d[n],a,b;
  a=1;
  b=0;
  
  for(int i=0;i<n;i++)
  {
     printf("enter the bit %d : ",i);
     scanf("%d",&d[i]);
     
     b=b+(a*d[i]);
     a=a*2;
  
    
  }
  printf("the decimal equivalent of ");
  
  for(int i=n-1;i>=0;i--)
  {
    
    printf("%d",d[i]);
   
  }
  printf(" is %d\n",b);*/
  /*int a;
  a=2+2*2+2*2*2+2*2*2*2+2*2*2*2*2+;
  printf("%d",a);*/
  
  
  
  
  
  
  
  
  
  
  
  /*int a[2][3];
  int b[3][2];
  int c[2][2];
  int r=0;
  
  for(int i=0;i<2;i++)
  {
    printf("enter the no %d :\n",i+1);
     for(int j=0;j<3;j++)
     {
        printf("enter the value %d ",j);
        scanf("%d",&a[i][j]);
     
     }
  
  
  }
  printf("enter b");
  for(int i=0;i<3;i++)
  {
    printf("enter the no %d : \n" ,i+1);
     for(int j=0;j<2;j++)
     {
        printf("enter the value %d  ",j);
        scanf("%d",&b[i][j]);
     
     }
  
  
  }
  
  for(int t=0;t<2;t++)
  {
     for(int i=0;i<2;i++)
     {
        for(int j=0;j<3;j++)
        {
          r+=a[i][j]*b[j][t];
        
        }
        c[i][t]=r;
        r=0;
     }
  
  
  }
  
  

     for(int i=0;i<2;i++)
     {
        for(int j=0;j<2;j++)
        {
         printf("|%d",c[i][j]);
        
        }
       
       printf("|\n");*/
    /*int a=1,b=0,c=1,d=1;
    for(int i=5;i>=1;i--)
    {
      for(int j=0;j<i;j++)
      {
      
          if(a%2==0)
          {
            printf("@");
          }
          else
          {
             printf("%d",d+j);
          }
          a++;

      }
       printf("\n");
       c--;
       a+=b;
       b++;    
       d++;
       
   int r=7,a=r,g=1;
   for(int i=1;i<=r;i++)
   {
       for(int j=1;j<=a;j++)
       {
           printf("%d",j);
       }
       printf("\n");
       for(int l=1;l<=a-1;l++)
       {
            if(g%2==0)
            {
               printf("*");
            }
            else
            {
                printf("?");
            }
            g++;
       
       }
       printf("\n");
       a-=2;
       g=1+i;
   
   
   }*/
   /*for(int i=10;i>=1;i-=2)
   {
      for(int j=1;j<=i;j++)
      {
         printf("%d",j);
         
      }
      printf("\n");
   }*/
   
   for(int i=1;i<=5;i+=2)
   {
      for(int j=5;j>=i;j--)
      {
         printf("%d",j);
         
      }
      printf("\n");
   }
   
}
