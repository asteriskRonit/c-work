#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>
void sig_hn()
{
    printf("dont try to divide with 0\n");
    
}
void main()
{
     signal(8,sig_hn);
     int *p;
     p=(int *)malloc(5*sizeof(4));
     p[0]=1;p[1]=2;p[2]=3;p[3]=4;p[4]=5;p[5]=10;
     for(int i=0;i<6;i++)
     {
         printf("%d\n",p[i]);
     }
     printf("enter the number of a and b:");
     scanf("%d %d",&p[0],&p[1]);
     if(p[1]==0) kill(getpid(),8);
     p[2]=p[0]/p[1];
     printf("%d\n",p[2]);

}