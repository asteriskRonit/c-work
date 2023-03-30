#include<stdio.h>
//90 degree rotation
void main()
{
    int n,m,a[10][10];
    printf("Enter the no of row and column:");
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("After Input\n");
    for(int i=0;i<n;i++)
    {
        
        for(int j=0;j<m;j++)
        {
            printf("| %d |",a[i][j]);
        }
        printf("\n");
    }
    for(int i=n-1;i>=0;i--)
    {
        for(int j=m-1;j>=0;j--)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}