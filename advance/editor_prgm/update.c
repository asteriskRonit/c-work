#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<dirent.h>
void main()
{
    FILE *f_p;
    f_p=fopen("directory.txt","w");
    DIR *d;
    struct dirent *de;
    if(d=opendir("."))
    {
        while((de=readdir(d))!=NULL)
        {
            fputs(de->d_name,f_p);
            fputs("\n",f_p);
        }
        closedir(d);
    }

    fclose(f_p);
}