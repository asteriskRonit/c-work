#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    time_t cur;
    char* cur_t;
    cur=time(NULL);
    if(cur==((time_t)-1))
    {
        (void) fprintf(stderr,"Failure\n");
        exit(EXIT_FAILURE);
    }
    cur_t=ctime(&cur);
    if(cur_t==NULL)
    {
        (void) fprintf(stderr,"Failure\n");
         exit(EXIT_FAILURE);
    }
    (void) printf("\n The current time is:%s \n",cur_t);
    exit(EXIT_SUCCESS);
}    