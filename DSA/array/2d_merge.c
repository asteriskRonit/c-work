#include<stdio.h>
#
void main()
{
    int a[10][10],b[10][10],n1,m1,n2,m2;
    printf("Enter the no of row and column:");
    scanf("%d %d",&n1,&m1);
    printf("Enter the elements:\n");
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<m1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the row and column of second array:");
    scanf("%d %d",&n2,&m2);
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<m2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("-----After Input\n-----");
    printf("-----1st Array-----\n");
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<m1;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("------2nd Array------\n");
    for(int i=0;i<n2;i++)  
    {
        for(int j=0;j<m2;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    if(m1==m2)
    {
        for(int i=0;i<n2;i++)
        {
            for(int j=0;j<m2;j++)
            {
              a[n1][j]=b[i][j];
            }
            n1++;
        }
    }
    else if(n1==n2)
    {
        int k=m1;
        for(int i=0;i<n2;i++)
        {
            for(int j=0;j<m2;j++)
            {
               a[i][m1]=b[i][j];
               m1++;    
            }
            m1=k;
         
        }
    }
    printf(" %d ",m1);
    printf("-----After merging-------\n");
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<m1+m2;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}