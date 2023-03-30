#include<stdio.h>
#include<string.h>
void main()
{
   /* char c[10];
    int h[5];
    char s[10];
    strcpy(s,c);
    printf("Enter the name:");
    scanf("%s",c);
    for(int i=0;i<strlen(c);i++)
    {
        printf("%c ",c[i]);
        int d=0;
        for(;c[i]!=0;c[i]/=16)
        {
            h[d]=c[i]%16;
            printf("%d ",h[d]);
            d++;
        }
        for(int j=d-1;j>=0;j--)
           printf("%d",h[j]);
        printf("\n"); 
        c[i]=s[i];
    }*/
    int a[5]={114,112,110,109,102};
    int k[7];
    for(int i=0;i<5;i++)
    {
        int d=0;
        printf("%d ",a[i]);
        for(;a[i]!=0;a[i]/=16)
        {
           k[d]=a[i]%16;
           d++;
        }
        for(int j=d-1;j>=0;j--)
           printf("%d",k[j]);
        printf("\n");   
    }
   /* int a=1658,b[5];
    int d=0,e=0;;
    for(;a!=0;a/=16)
    {

      b[d]=a%16;
      d++;

    }
    for(int i=d-1;i>=0;i--)
      printf("%d",b[i]);*/
}