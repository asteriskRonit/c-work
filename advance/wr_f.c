#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void main()
{
    printf("pid=%d\n",getpid());
    printf("\n-----hello world-----\n");
    char *args[]={"./dir",NULL};
    execv(args[0],args);
    printf("Exiting wr\n");
}    
