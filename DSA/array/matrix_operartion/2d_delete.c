#include<stdio.h>
void main()
{
    int a[10][10],n,m;
    printf("ENter the no  of rows and column:");
    scanf("%d %d",&n,&m);
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n------After Input------\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
 
}