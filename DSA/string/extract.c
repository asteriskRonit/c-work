#include<stdio.h>
#include<string.h>
void recur_str(char b[],int i)
{
   if(i>=0)
   {
       printf("%c",b[i]);
       recur_str(b,i-1);
   }
}
void main()
{
    char c[20];
    //int pos,n,i;
    printf("Enter the string\a:");
    gets(c);
    recur_str(c,strlen(c)-1);
   /* printf("\n-----After inputing the string----\n%s\n",c);
    printf("Enter the position from which u want to extract:");
    scanf("%d",&pos);
    printf("Enter the no of character you want to extract:");
    scanf("%d",&n);
    i=0;
    pos=pos-1;
    do
    {
        printf("%c",c[pos++]);
        i++;
    } while (i<n);*/
    printf("\n");
    
}