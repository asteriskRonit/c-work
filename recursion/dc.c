#include<stdio.h>

void sort(int x[],int p,int j,int k,int z)
{
    if(k<=z-2)
    {
        if(p!=0)
        {
            if(x[j]>x[j+1])
            {
                int t=x[j];
                x[j]=x[j+1];
                x[j+1]=t; 
            }
            sort(x,p-1,j+1,0,z);
        }
        if(j==0)
        {
          sort(x,p,j,k+1,z);
        }
    } 
    else
    {
        return;
    }      
}
void main()
{
    int a[10],n;
    printf("Enter no of terms\n");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,n-1,0,0,n);
    printf("After sorting\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}