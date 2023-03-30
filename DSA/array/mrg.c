#include<stdio.h>
void main()
{
    int a[10],b[10],n,m,c[20],p;
    printf("enter the no of elements 1st array:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the no of elements 2nd array:");
    scanf("%d",&m);
    printf("enter the elements:");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("enter the position");
    scanf("%d",&p);
    printf("\nafter merging\n");
    for(int i=0;i<=p;i++)
    {
        if(i!=p)
        {
            c[i]=a[i];
        }
        else
        {
            for(int k=0;k<m;k++)
            {
                c[k+i]=b[k];
            }
            for(int j=0;j<n-p;j++)
            {
                c[m+j+p]=a[j+p];
            }
        }
    }
    for(int i=0;i<(n+m);i++)
    {
        printf("%d ",c[i]);
    }
}