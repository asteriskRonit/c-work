#include<stdio.h>
#include<unistd.h>
#include<signal.h>
#include<stdlib.h>
#include<string.h>
size_t my_print(char args[])
{
   write(1,args,strlen(args));
   return strlen(args);
}
/*size_t my_scan(char c[],int *arg)
{
    read()
}*/

#define N 10
void main()
{
   int pid,fd[2];
   char msg[N]="hello",msg1[N];
   if(pipe(fd)==-1){
      my_print("error to do the pipe\n");
      _exit(1);
   } 
   printf("%d  %d\n",fd[0],fd[1]);
   if((pid=fork())==0)
   {
      printf("child:sending data to parents %s\n",msg);
      write(fd[1],msg,N);
   }
   else
   {   
      read(fd[0],msg1,N);
      my_print("parent:is recieving data from child->");
      printf("%s\n",msg1);
      

   }
}