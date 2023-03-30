#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>
void sig_hndl()
{
    printf("you cant enter any zero in it\n");
}
void sig()
{
  printf("we got\n");
}
void s()
{
  printf("s\n");
}
void main()
{
  /* int pid=fork();
   if(pid==0)
   {
      signal(2,sig_hndl);
   }
   else
   {

   }*/
   
   /*int pid=fork();
   if(pid==0)
   {
     signal(SIGUSR1,sig_hndl);
     signal(SIGHUP,sig);
     signal(SIGQUIT,s);
     
   }
   else
   {
     printf("pa....1\n");
     kill(pid,SIGUSR1);
     sleep(2);

     printf("pa....2\n");
     kill(pid,SIGHUP);
     sleep(2);

     printf("pa....3\n");
     kill(pid,SIGQUIT);
   

     
   }*/

   signal(8,sig_hndl);

   int a=10,b=0;
   if(b==0)
     kill(getpid(),8);
   else
     printf("%d\n",a/b);

   printf("hello world\n");
    
}