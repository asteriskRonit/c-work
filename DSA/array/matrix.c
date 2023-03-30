#include<stdio.h>
void main()
{
   /* int a[3][3],b[3][3],c[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }*/
    int a[10][10],b[10][10],c[10][10],n1,m1,n2,m2;
    printf("enter the first row and col:");
    scanf("%d %d",&n1,&m1);
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<m1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the second row and col:");
    scanf("%d %d",&n2,&m2);
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<m2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(m1==n2)
    {
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<m2;j++)
            {
                int add=0;
                for(int k=0;k<m1;k++)
                {
                    add=add+(a[i][k]*b[k][j]);
                }
                c[i][j]=add;
            }
        }
    }
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<m2;j++)
        {
            printf("%d ",c[i][j]);
        }
    }
}
