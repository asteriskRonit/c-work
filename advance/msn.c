#include<stdio.h>
#include<stdlib.h>
#include<sys/ipc.h>
#include<sys/msg.h>
struct mesg
{
    long type;
    char data[100];
}message;
int main()
{
    key_t key;
    int msgid;
    key=ftok("msn.c",1);
    msgid=msgget(key,0666|IPC_CREAT);
    printf("key=%d\tmgid=%d\n",key,msgid);
    message.type=1;
    printf("Enter the data that you want to process:");
    scanf("%s",message.data);
    if((msgsnd(msgid,&message,sizeof(message),1)==-1))
    {
        printf("error\n");
        exit(1);
    }
    printf("message send %s\n",message.data);
}