#include<stdio.h>
#include<stdlib.h>
//to find the sum of a series ina array using dynamic memory allocation
void main()
{
    int *p;
    int n=5;
    p=(int *)malloc(n*sizeof(int));
    int add=0;
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("Printing the values:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",p[i]);
        add+=p[i];
    }
    printf("\n");
    printf("The sum of the series is %d\n",add);
    free(p);
 
}