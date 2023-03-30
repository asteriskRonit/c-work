#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<string.h>
struct message
{
    long type_messg;
    char messg[20];
}megs;
int option()
{
    puts("1.Make file\n\n");
    puts("2.Open File\n");

    return 0;
}
int main()
{
    int v_c,msgid;
    printf("enter the option:");
    scanf("%d",&v_c);
    key_t key;
    key=IPC_PRIVATE;
    msgid=msgget(key,0666|IPC_CREAT);
    printf("key = %d\tmsgid = %d\n",key,msgid);
    if(msgid<0)
    {
        puts("there is some errors in processing the msgid :]");
        exit(1);
    }
    megs.type_messg=1;
    puts("Enter the message you want to give....");
    scanf("%s",megs.messg);
    if((msgsnd(msgid,&megs,sizeof(megs),0)==-1))
    {
        puts("we have find an error to send the message:(");
        exit(0);
    }
    printf("%s: has been sucessfully send\n",megs.messg);

    return 0;
}