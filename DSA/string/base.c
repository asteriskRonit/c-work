#include<stdio.h>
#include<string.h>
void main()
{
    int i=0;
    char c[20],b[10];
    printf("Enter the 1st string:");
    scanf("%s",&c);
    printf("Enter the 2nd string:");
    scanf("%s",&b);
  //  printf("%ld %ld",strlen(c),strlen(b));
   // merge(c,b);
    printf("-----After merging----\n");
    int j=strlen(c);
    for(i=0;b[i]!='\0';i++)
    {
        c[j]=b[i];
        j++;
    }
    printf("%s",c);
    printf("\n");
    
}