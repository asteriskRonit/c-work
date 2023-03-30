#include<stdio.h>
void main()
{
    //triplets
    int a[4]={1,5,3,2};
    for(int i=0;i<4;i++)
    {                                 
      for(int j=i+1;j<4;j++)
      {
          int c=a[i]+a[j];
          printf("--%d+%d=%d--\n",a[i],a[j],c);
          for(int k=0;k<4;k++)
          {
              if(a[k]==c)
              {
                  printf("%d+%d=%d\n",a[i],a[j],c);
              }
          }
      }
    }
    printf("\n\n");
    //missing number
    int r[10]={1,2,3,4,5,6,8,9,10};
   for(int i=1;i<10;i++)
   {
       if(r[i]!=(r[i-1]+1))
       {
           printf("%d is missing\n",r[i]-1);
           break;
       }
   }
}