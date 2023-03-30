#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/stat.h>
void printus(const char* my)
{
    printf("hello\n");
    printf("\nusage:%s <mode> <pathname>\n\n",my);
    exit(1);
}
void main(int c,char *w[])
{
    /*char dtm[100],name[2][20];
    int dt,dy;
    strcpy(dtm,"ronit paul 19 2002");
    sscanf(dtm,"%s %s %d %d",name[0],name[1],&dt,&dy);
    printf("first_name = %s\tlast_name = %s\tage =  %d\tyear = %d\n",name[0],name[1],dt,dy);*/
    
    int p,i;
    if(c<3)
     printus(w[0]);
    printf("%s\n",w[2]); 
    if(sscanf(w[1],"%o",&p)==0)
    {
        printf("%s: is invalid mode\n",w[0]);
        exit(1);
    } 
    for(i=2;i<c;i++)
    {
        if(chmod(w[i],p)==-1)
          perror(w[0]);
    }
}