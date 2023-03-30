#include<stdio.h>
void swap(int **a,int **b)
{
    **a+=**b;
    **b=**a-**b;
     **a-=**b;
}
void insr(int *a,int b,int c)
{
    int j=0;
    if(c<b-1)
    {/* condition */
        if(*a>*(a+1))
        {
          int f=*a;
          *a=*(a+1);
          *(a+1)=f;
           for(int i=c;i>0;i--)
           {
              // printf("%d\n",i);
               if(*(a+j)<*(a+j-1))
               {
                     //printf("%d %d \n",*(a+j-1),*(a+j));
                     f=*(a+j);
                     *(a+j)=*(a+j-1);
                     *(a+j-1)=f;
                     //printf("%d %d \n",*(a+j-1),*(a+j));
               }
               j--; 
           }
           insr(++a,b,++c);
         }
       
    }
}
void main()
{
    int a[11],i=0;
    a[10]=7;
    printf("enter the elements: ");
    do
    {
        scanf("%d",(a+i));
        i++;
    } while (i<a[10]);
    
    insr(&a[0],a[10],0);
    for(i=0;i<a[10];i++)
    {
          printf("%d ",a[i]);
    }
    printf("\n");
     
    
}