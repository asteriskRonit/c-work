#include<stdio.h>
#include<stdlib.h>
void main()
{
    int num;
    FILE *ptr;
    ptr=fopen("ronit.txt","w");
    if(ptr==NULL)
    {
        printf("error");
        exit(1);
    }
    printf("enter the num");
    scanf("%d",&num);

    fprintf(ptr,"%d",num);
    fclose(ptr);

}