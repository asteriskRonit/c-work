#include<stdio.h>
#include<sys/stat.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
void print_usuage(char *name)
{
    printf("\nusage %s:<mode><pathname>\n",name);
    exit(1);
}
void main(int i,char *c[])
{
     if(i<2)
       print_usuage(c[0]);
     if(rmdir(c[1])==-1)
       perror(c[0])  ;
}