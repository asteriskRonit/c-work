#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *jl;
    char c[10][10];
    int i;
    jl=fopen("re.txt","r");
    if(jl==NULL)
    {
        printf("Error!\n");
        exit(1);
    }
    for(i=0;i<3;i++)
    {
        fscanf(jl,"%s\n",c[i]);
    }
    fclose(jl);
    for(i=0;i<3;i++)
    {
        printf("%s\n",c[i]);
    }
}