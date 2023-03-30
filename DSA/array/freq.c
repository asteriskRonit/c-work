//appending of n number of element in an array
#include<stdio.h>
void main()
{
    int n,a[10],c,v;
    printf("enter the no of element");
    scanf("%d",&n);
    printf("enter the elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("before sorting the array\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nno of element you want to append:");
    scanf("%d",&v);
    c=sizeof(a)-n*4;
    c/=4;
    if(c>=v)
    {
        printf("enter the number's:");
        for(int i=n;i<n+v;i++)
        {
          scanf("%d",&a[i]);
        }
         n=n+v;
         printf("\nafter appending\n");
         for(int i=0;i<n;i++)
         {
           printf("%d ",a[i]);
         }  
    }
    else
    {
        printf("\nappend is not possible\n");
    }

    printf("\n");  
    
}
