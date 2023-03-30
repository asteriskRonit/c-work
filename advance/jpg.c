#include<stdio.h>
#include<stdlib.h>
//dynamically inserting elements in an array
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
         printf("%.2f ",p[i]);
    printf("\n");
    int m,c;
    printf("\nEnter the no of terms u want to insert:");
    scanf("%d",&c);
    k=realloc(p,c*sizeof(float));
    for(int j=0;j<c;j++)
    {
      printf("Enter the pos you want to insert:");
      scanf("%d",&m);

      for(int i=n;i>m;i--)
        k[i]=k[i-1];
      printf("Enter the no:");
      scanf("%f",&k[m]);
      n++;
    }
    printf("\n--------After inserting---------\n");
    for(int i=0;i<n;i++)
       printf("%.2f ",k[i]);
     printf("\n");




}
