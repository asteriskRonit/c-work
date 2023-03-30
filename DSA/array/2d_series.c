#include<stdio.h>
void main()
{
    int a[10][10],n,m,mul=1;
    printf("enter the no of rows and column:");
    scanf("%d %d",&n,&m);
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            mul*=a[i][j];
        }
    }
    printf("\nThe multiplication of the series is %d \n",mul);

}