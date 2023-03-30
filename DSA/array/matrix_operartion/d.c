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
    int b=n;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
          
            if(strstr(c[i],c[j]))
            {
                  printf("Found pos %d",i);
                for(int k=j;k<n-1;k++)
                {
                    //strcpy(v,c[j]);
                     strcpy(c[j],c[j+1]);
                     printf("%s\n",c[j]);
                     //strcpy(c[j+1],v);
                     b--;
                }
            }
        }
    }

    for(int i=0;i<b;i++)
    {
        printf("%s ",c[i]);
    }
    printf("\n");
    
}