#include<stdio.h>
//smallest no and largest no
void main()
{
    int n,a[5];
    n=5;
    printf("Enter the number:");
    for(int i=0;i<n;i++)
      scanf("%d",&a[i]);
    int t=a[0],k=a[0];  
    for(int i=1;i<n;i++)
    {
      if(a[i]>t)
       t=a[i];
      if(a[i]<k)
        k=a[i];  
    }
    printf("The largest no and smallest no in the array is %d and %d\n",t,k);
}