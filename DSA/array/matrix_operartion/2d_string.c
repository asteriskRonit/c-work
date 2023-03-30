#include<stdio.h>
#include<string.h>
void main()
{
    char c[10][10];
    int n;
    printf("Enter the no of name:");
    scanf("%d",&n);
    scanf("%c",&c[0][0]);
    printf("Enter the string\n");
    for(int i=0;i<n;i++)
    {
        scanf("%s",c[i]);
    }
    printf("After soting asc\n");
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
        printf("%s\n",c[i]);
    }
}