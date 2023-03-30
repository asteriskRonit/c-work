#include<stdio.h>
void main()
{
    int a[9]={2,3,4,5,6,7,8,9,10},x,low,high,mid;
    low=0;
    high=8;
    //int mid=(low+high)/2;
   // printf("%d",a[mid]);
    printf("enter the number u want to search");
    scanf("%d",&x);
    do
    {
        mid=(low+high)/2;
        if(a[mid]==x)
        {
            printf("%d found in location %d\n",x,mid+1);
            break;
        }
        else if (a[mid]>x)
        {
           high=mid-1; 
        }
        else
        {
            low=mid+1;
        }
    } while (low<=high);
    
}