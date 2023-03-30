#include<stdio.h>
void main()
{
    int a[10],n;
    printf("Enter the no u want");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n---After inserting---\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
   /* for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }*/ //bubble sort
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                int t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }
    printf("\n-------After sorting--------\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}