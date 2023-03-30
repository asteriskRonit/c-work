#include<stdio.h>
#include<string.h>
void main()
{
    char c[10][10],v[10];
    int n;
    printf("Enter the no of name:");
    scanf("%d",&n);
    printf("Enter the name\n");
    for(int i=0;i<n;i++)
    {
        scanf("%s",c[i]);
    }
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(c[j],c[i]))
            {
                char k[10];
                strcpy(k,c[i]);
                strcpy(c[i],c[j]);
                strcpy(c[j],k);
            }
        }
        
    }
  
    for(int i=0;i<n;i++)
    {
        printf("%s ",c[i]);
    }
    printf("\n");
    int mid,front,last;
    front=0;
    last=n-1;
    printf("Enter the name:");
    scanf("%s",v);
    while(front<=last)
    {
        mid=(front+last)/2;
        int j=strcmp(c[mid],v);
      // printf("%s %s %d\n",v,c[mid],j);

        //printf("%d ",j);
        if(j==0)
        {
            printf("Found in pos %d\n",mid);
            break;
        }
        else if(j<0)
        {
            front=mid+1;
            printf("Hello\n");
        }
        else
        {
            last=mid-1;
        }
    }
}