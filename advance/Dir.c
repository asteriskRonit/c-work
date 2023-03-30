#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<dirent.h>
#include<fcntl.h>
int file_check(char ckc_fl[])
{
    int fd;
    fd=open(ckc_fl,O_RDONLY);
}
void main(int ui,char *ch[])
{
  /*  char c[100][100];
    DIR *dir_ector;
    struct dirent *dir;
    int count=0;
    if((dir_ector=opendir(".")))
    {
        while ((dir=readdir(dir_ector))!=NULL)
        {
            strcpy(c[count],dir->d_name);
            count++;
        }
        closedir(dir_ector);
    }
    if(ui==1)
    {
        file_check(ch[2]);
    }*/
    printf("pid=%d\n",getpid());
    printf("\n------hello fgh------\n");
    printf("ended in Dir.c\n");
}