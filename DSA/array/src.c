#include<stdio.h>
void main()
{
    int a[10],b[10],n,c,l=0,f;
    printf("Enter the no of elements:");
    scanf("%d ",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<l;i++)
    {
        printf("%d ",b[i]);
    }
    for(int i=0;i<n;i++)
    {
       c=0;
       for(int j=0;j<l;j++)
       {
           if(a[i]==a[j])
           {
               c++;
           }
       } 
       if(c==0)
       {
           b[l]=a[i];
          // printf("%d ",b[l]);
           l++;
            f=0;
           for(int k=i;k<n;k++)
           {
              if(a[i]==a[k])
              {
                  f++;
              }      
           }
            printf("%d->%d\n",a[i],f);
       }       
    }
    printf("\n");
}