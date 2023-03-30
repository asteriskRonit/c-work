#include<stdio.h>
void main()
{
    int a[10],n;
    printf("Enter the no of terms u want:");
    scanf("%d",&n);
    printf("Enter the no:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("----After input----\n");
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    int left=0,right=n-1,mid;
    mid=(left+right)/2;
    int pivot=a[mid];
   // printf("%d",pivot);
    for(int i=0;i<mid;)
    {
        
        if(a[i]>pivot)
        {
            for(int j=i;j<mid;j++)
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
        else
        {
            i++;
        }
    } 
    printf("\n----After Left sorting----\n");
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}