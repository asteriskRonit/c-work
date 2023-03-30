#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 100
struct flight
{
    char from[20];
    char to[20];
    int distance;
    int skip;
};
struct flight fl[max];
int f_pos=0,find_pos=0;
int top=0;
struct stack
{
    char from[20];
    char to[20];
    int dist;
};
struct stack polish[max];
void push(char *from,char *to,int ids)
{
    if(top<max)
    {
        strcpy(polish[top].from,from);
        strcpy(polish[top].to,to);
        polish[top].dist=ids;
        top++;
    }
    else
      printf("\n-----Stack is full----\n");
}
void pop(char *from,char *to,int *dis)
{
    if(top==0)
      printf("\n-----stack is empty-----\n");
    else
    {
       top--;
       strcpy(from,polish[top].from);
       strcpy(to,polish[top].to);
       *dis=polish[top].dist;
    }   

}
void assertflight(char *from,char *to,int dis)
{
    if(f_pos<max)
    {
        strcpy(fl[f_pos].from,from);
        strcpy(fl[f_pos].to,to);
        fl[f_pos].distance=dis;
        fl[f_pos].skip=0;
        f_pos++;
    }
    else
      printf("\n-----Database is full-----\n");
}
void setup()
{
    assertflight("Newyork","chicago",1000);
    assertflight("Newyork","sydney",100);
    assertflight("sydney","agartala",0);
    assertflight("chicago","denver",800);
    assertflight("Newyork","toronto",1300);
    assertflight("Newyork","denver",800);
    assertflight("toronto","delhi",3000);
    assertflight("delhi","sydney",2000);
    assertflight("sydney","kolkata",100);
    assertflight("kolkata","welington",1000);
    assertflight("mumbai","armsterden",10000);
    assertflight("bangalore","agartala",100);
    assertflight("delhi","agartala",200);
}
void route(char *to)
{
    int dis=0,t=0;
    while (t<top)
    {
        printf("%s to ",polish[t].from);
        dis+=polish[t].dist;
        t++;
    }
    printf("%s\n",to);
   printf("Distance is %d\n",dis);
    
}
int find(char *frm,char *any)
{
    find_pos=0;
    while(find_pos<f_pos)
    {
        if(!strcmp(fl[find_pos].from,frm)&&!fl[find_pos].skip)
        {
            strcpy(any,fl[find_pos].to);
            fl[find_pos].skip=1;
            return fl[find_pos].distance;
        }
        find_pos++;
    }
    return 0;
}
int match(char *from,char *to)
{
    for(int i=f_pos-1;i>-1;i--)
    {
        if(!strcmp(fl[i].from,from)&&!strcmp(fl[i].to,to))
             return fl[i].distance;     
    }
    return 0;
}
void isflight(char *from,char *to)
{
    int d,dist;
    char any[20];
    if(d=match(from,to))
    {
        push(from,to,d);
        return;
    }
    if(dist=find(from,any))
    {
        push(from,to,dist);
        isflight(any,to);
    }
    else if(top>0)
    {
        pop(from,to,&dist);
        isflight(from,to);
    }
}
void main()
{
    char from[20],to[20];
    strcpy(from,"Newyork");
    strcpy(to,"welington");
    setup();
    isflight(from,to);
    route(to);
}