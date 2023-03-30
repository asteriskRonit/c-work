#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#define MAX 20
struct msg
{
    long msg_type;
    char msg_data[100];
}message;
void main()
{
   key_t key;
   int mgid;
   key=ftok("progfile",65);
   mgid=msgget(key,0666 | IPC_CREAT);
   printf("key=%d\tmgid=%d\n",key,mgid);
   message.msg_type=1;
   printf("write data.....|;)");
   fgets(message.msg_data,MAX,stdin);
   if((msgsnd(mgid,&message,sizeof(message),0)==-1))
   {
     printf("error!!!!.....\nexiting....\n");
     exit(1);
   }
   printf("%d  %s\n",puts("data has been sended "),message.msg_data);

   /*system("gcc rcv.c -o rn");
   system("./rn");*/


}