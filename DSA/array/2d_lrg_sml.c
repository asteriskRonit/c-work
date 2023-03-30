#include<stdio.h>
void main()
{
    int d[10][10],n,m,i,j;
    printf("ENter the no of row and column:");
    scanf("%d %d",&n,&m);
    printf("enter the element:\n");
    i=j=0;
    do
    {  j=0;
        do
        {
            scanf("%d",&d[i][j]);
            j++;
        } while (j<m);/* condition */
        i++;
    } while (i<n);
    printf("After input\n");
    i=j=0;
    do
    {
        j=0;
        do
        {
            printf("%d ",d[i][j]);#include<stdio.h>
struct student
{
    char name[10];
            j++;
        } while (j<m);
        printf("\n");
        i++;
        
    } while (i<n);
    j=1;
    int l=d[0][0];
    int s=d[0][0];
    for(i=0;i<n;i++)
    {
        for(;j<m;j++)
        {
            if(d[i][j]>l)
            {
                l=d[i][j];
            }
            if(d[i][j]<s)
            {
                s=d[i][j];
            }
        }
        j=0;
    }
    printf("Largest no is %d\nsmallest no is %d\n",l,s);   
}