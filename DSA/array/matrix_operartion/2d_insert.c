#include<stdio.h>
void sc_insert(int n,int m,int d[10][10])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&d[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",&d[i][j]);
        }
        printf("\n");
    }
}
void main()
{
    int a[10][10],n,m,no;
    printf("Enter the no of rows and column:");
    scanf("%d %d",&n,&m);
    printf("Enter the elements\n");
    sc_insert(n,m,a);
    /*for(int i=0;i<n;i++)
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
    printf("You have to enter multiple of %d inputs\nEnter the no of inputs:",m);
    scanf("%d",&no);
    printf("ENter the elements:");
    for(int i=n;i<n+(no/n);i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    n+=(no/n);
    printf("\n------After appending------\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           printf("%d ",a[i][j]);
        }
        printf("\n");
    }*/
}