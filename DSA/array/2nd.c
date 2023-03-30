#include<stdio.h>
void main()
{
    int a[10][10],n,m,v,c=0;
    printf("Enter the no of row and column:");
    scanf("%d %d",&n,&m);
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("------After Input-----\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the number you are searching:");
    scanf("%d",&v);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==v)
            {
                printf("Found at position %d,%d\n",i,j);
                c++;
            }
        }
    }
    if(c==0)
    {
        printf("Element not found\n");
        
    }
}