#include<stdio.h>
#include<stdlib.h>
void main()
{
    int num;
    FILE *ptr;
    ptr=fopen("ronit.txt","r");
    if(ptr==NULL)
    {
        printf("error");
        exit(1);
    }
    /*printf("enter the num");
    scanf("%d",&num);*/

    fscanf(ptr,"%d",&num);
    fscanf(ptr,"%d",&num);
    printf("the value of num is=%d",num);
    fclose(ptr);

}