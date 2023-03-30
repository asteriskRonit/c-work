#include<stdio.h>
#include<string.h>
#define max 100
int f_p=0,l=0;
struct dest
{
    char from[20];
    char to[20];
    int distance;
};
typedef struct dest des;
des point[max];
void create(char from[],char to[],int dist)
{
    if(f_p<max)
    {
       strcpy(point[f_p].from,from);
       strcpy(point[f_p].to,to);
       point[f_p].distance=dist;
       f_p++;
    }
    else
    {
        printf("Data base is full\n");
    }
}
int count(char fro[])
{
    int c=0,i=0;
    do
    {
        if(strstr(point[i].from,fro))
        {
            //printf("%s->%s\n",point[i].from,point[i].to);
            c++;
        }
        i++;
    } while (i<f_p);
    return c;
}
int tracker(char fro[],int i)
{
    int c=0;
    do
    {
        if(strstr(point[i].from,fro))
        {
            //printf("%s->%s\n",point[i].from,point[i].to);
            return i;
        }
        i++;
        l++;
    } while (i<f_p);
}
int search(char fro[],char t[])
{
  int j;
  for (int i = 0; i < f_p; i++)
  {
      if(strstr(point[i].from,fro)&&strstr(point[i].to,t)) 
      {
         printf("Found flight from %s to %s of distance %d miles\n",point[i].from,point[i].to,point[i].distance);
         return ;
      }  
  }
  printf("%d",count(fro));
  for(int i=0;i<count(fro);i++)
  {
      j=tracker(fro,l+i);
      printf("%s",point[j].to);
    
  }
  l=0;
}
void print()
{
    if(f_p==0)
    {
         printf("databse is clear\n");
    }
    else
    {
        for(int i=0;i<f_p;i++)
        {
            printf("%s %s %d\n",point[i].from,point[i].to,point[i].distance);
        }
        
    }
}
void main()
{
   create("agartala","shimla",1000);
   create("kolkata","delhi",2000);
   create("guwhati","chennai",3000);
   create("manipur","bangalore",4000);
   create("kolkata","agartala",5000);
   search("kolkata","shimla");
   //tracker("kolkata");
   //printf("\n");
}