#include<stdio.h>
void main()
{
    int n,a[10];
    printf("enter the no of elements");
    scanf("%d",&n);
    printf("enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n after input \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                for(int k=i;k<n-1;k++)
                {
                    int t=a[k];
                    a[k]=a[k+1];
                    a[k+1]=t;
                }
                n--;
            }
        }
    }
    printf("\n After Deleting Duplicate Element \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}