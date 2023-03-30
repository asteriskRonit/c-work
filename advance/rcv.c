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
   /*if(key<0)
   {
       printf("the key generate is non-zero no\n");
       exit(1);
   }*/
   mgid=msgget(key,0666 | IPC_CREAT);
   printf("key=%d\tmgid=%d\n",key,mgid);
   msgrcv(mgid,&message,sizeof(message),1,0);
   printf("data recieved is : %s \n",message.msg_data);
 
   msgctl(mgid,IPC_RMID,NULL);


}