#include<stdio.h>
#include<string.h>
void main()
{
    //appending
   /* char c[10][10];
    int n;
    printf("Enter the no of contents\n");
    scanf("%d",&n);
    printf("Enter the contents\n");
    for(int i=0;i<n;i++)
    {
        scanf("%s",c[i]);
    }
    printf("Enter the string you want to append\n");
    scanf("%s",c[n]);
    n++;
    printf("After appending\n");
    for(int i=0;i<n;i++)
    {
        printf("%s\n",c[i]);
    }*/
    //inserting
    char c[10][15];
    int n;
    printf("Enter the no of contents:");
    scanf("%d",&n);
    printf("Enter the contents\n");
    for(int i=0;i<n;i++)
    {
        scanf("%s",c[i]);
    }
    int pos;
    printf("Enter the index you want to insert\n");
    scanf("%d",&pos);
    n++;
    printf("After inserting\n");
    for(int i=n-1;i>=pos;i--)
    {
          char k[10];
          strcpy(k,c[i]);
          strcpy(c[i],c[i+1]);
          strcpy(c[i+1],k);
    }
    printf("Enter the string for inserting\n");
    scanf("%s",c[pos]);
    n++;
    for(int i=0;i<n;i++)
    {
        printf("%s\n",c[i]);
    }


}