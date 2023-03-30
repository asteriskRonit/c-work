#include<stdio.h>
void main()
{
    FILE *g;
    g=fopen("data.txt","a");
    fprintf(g,"Hello world");
    fclose(g);
}