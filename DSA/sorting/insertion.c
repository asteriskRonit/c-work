#include<stdio.h>
void swap(int *a,int *b)
{
    *a+=*b;
    *b=*a-*b;
     *a-=*b;
}
void main()
{
    //sorting array in asc order
    int a[12];
    printf("enter the number of element");
    scanf("%d",&a[10]);
    printf("enter the elements:");
    for(a[11]=0;a[11]<a[10];a[11]++)
    {
        scanf("%d",&a[a[11]]);
    }
    printf("Before sort\n");
    for(a[11]=0;a[11]<a[10];a[11]++)
    {
        printf("%d ",a[a[11]]);
    }
    printf("\n");
    for(a[11]=0;a[11]<a[10]-1;a[11]++)
    {
        if(a[a[11]]>a[a[11]+1])
        {
            swap(&a[a[11]],&a[a[11]+1]);        
            for(int j=a[11];j>0;j--)
            {
                if(a[j]<a[j-1])
                {
                    swap(&a[j],&a[j-1]);
                }
            }
        }          
    }
    printf("after sorting\n");
    for(a[11]=0;a[11]<a[10];a[11]++)
    {
        printf("%d ",a[a[11]]);
    }
    printf("\n");

    //sorting the array in dsc order
    int a[12];
    printf("enter the number of element");
    scanf("%d",&a[10]);
    printf("enter the elements:");
    for(a[11]=0;a[11]<a[10];a[11]++)
    {
        scanf("%d",&a[a[11]]);
    }
    printf("Before sort\n");
    for(a[11]=0;a[11]<a[10];a[11]++)
    {
        printf("%d ",a[a[11]]);
    }
    printf("\n");
    for(a[11]=0;a[11]<a[10]-1;a[11]++)+
    {
        if(a[a[11]]<a[a[11]+1])
        {
            swap(&a[a[11]],&a[a[11]+1]);        
            for(int j=a[11];j>0;j--)
            {
                if(a[j]>a[j-1])
                {
                    swap(&a[j],&a[j-1]);
                }
            }
        }          
    }
    printf("after sorting\n");
    for(a[11]=0;a[11]<a[10];a[11]++)
    {
        printf("%d ",a[a[11]]);
    }
    printf("\n");
    
}