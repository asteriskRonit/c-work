#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<fcntl.h>
#include<dirent.h>
#include<string.h>
struct message
{
    long type_messg;
    char messg[20];
}megs;
int checking(char name[])
{
    FILE *f;
    char line[1000];
    f=fopen("update.c","r");
    if(f==NULL)
    {
        printf("unable to open the file:\n");
        return -1;
    }
    while(fgets(line,sizeof(line),f)!=NULL)
    {
       /*  if(strcmp(name,line)==0)
         {*/
             printf("%s\n",line);
             return 0;
        // }
    }
    fclose(f);
    return 0;
}
int main()
{
    int msgid;
    key_t key;
    key=IPC_PRIVATE;
    msgid=msgget(key,0666|IPC_CREAT);
     printf("key = %d\tmsgid = %d\n",key,msgid);
    if(msgid<0)
    {
        puts("there is some errors in processing the msgid :]");
        exit(1);
    }
    if((msgrcv(3,&megs,sizeof(megs),1,0))==-1)
    {
        printf("error in receiving data:)");
        exit(1);
    }
    printf("The message is:%s\n",megs.messg);

    msgctl(msgid,IPC_RMID,NULL);

    //checking("main.c");
}