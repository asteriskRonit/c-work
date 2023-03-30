#include<stdio.h>
#include<stdlib.h>
void main()
{
    float *p,*k;
    int n;
    printf("Enter the no of memory you want:");
    scanf("%d",&n);
    p=(float *)malloc(n*sizeof(float));
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
       scanf("%f",&p[i]);
    printf("printing the value:");
    for(int i=0;i<n;i++)
         printf("%f ",p[i]);
    int m,c;
    c=n;
    /*printf("\nEnter the no of terms u want to insert:");
    scanf("%d",&m);*/
    k=realloc(p,1*sizeof(float));

   // printf("Append the term:");
    /*for(int i=0;i<m;i++)
    {
       scanf("%f",&k[c]);
       c++;
    }
    printf("\n---After appending---\n");
    for(int i=0;i<c;i++)
      printf("%f ",k[i]);
    printf("\n"); */
    printf("Enter the pos you want to insert:");
    scanf("%d",&m);
    for(int i=n;i>n;i++)
    {
       a[i]=a[i-1];
    }
    printf("Enter the no:");
    scanf("%f",&k[m]);
    n++;

    


}