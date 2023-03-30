#include<stdio.h>
#include<sys/stat.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
void print_usuage(char *name)
{
    printf("\nusage %s:<mode><pathname>\n",name);
    exit(1);
}
int main(int argv,char *argc[])
{
   int mode;
   if(argv<2)
     print_usuage(argc[0]);
   else if(sscanf(argc[2],"%o",&mode)==0)
   {
        printf("\n--invalid mode--\n");
        exit(1);
   }  
   if(mkdir(argc[1],mode)==-1)
     perror(argc[0]);

   printf("do you want to craete any file [Y/O]:");
   char c;
   for(;;)
   {
       if(kbhit())
       {
           c=getch();
           if(c=='y')
           {
               FILE *f_i;
               char f[20];
               puts("\nplease enter your file name----");
               scanf("%s",f);
               f_i=fopen(f,"r");
               fclose(f_i);
               exit(1);
           }
           else if(c=='o')
           {
               break;
           }

       }
   }   

  return 0;
}