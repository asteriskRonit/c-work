#include<stdio.h>
#include<string.h>
/*void STRUPR(char x[],int i)
{
    if(x[i]!='\0')
    {
       if(x[i]>='a'&&x[i]<='z')
       {
           x[i]-=32;
       }
       STRUPR(x,i+1);
    }
}
void STRLWR(char x[],int i)
{
    if(x[i]!='\0')
    {
       if(x[i]>='A'&&x[i]<='Z')
       {
           x[i]+=32;
       }
       STRlWR(x,i+1);
    }
}*/
int calc(char a[],char b[])
{
    int j=0,k=0;
    for(int i=0;i<strlen(a);i++)
    {
        j+=a[i];
        k+=b[i];
    }
    if(j>k)
    {
        return 1;
    }
    else if(k>j)
    {
        return 0;
    }
    else
    {
        return -1;
    }
    
}
int StrCmp(char x[],char y[])
{
    int c=0;
    if(strlen(x)==strlen(y))
    {
        for(int i=0;i<strlen(x)-1;i++)
        {
            if(x[i]==y[i])
            {
                c++;
            }
        }
        if(c==strlen(x))
        {
            return 0;
        }
        else
        {
           int t=calc(x,y);
           if(t==1)
           {
              return 1;
           }
           else if(t==-1)
           {
               return -1;
           }
        }  
    }
    else if(strlen(x)>strlen(y))
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
void main()
{
    char c[10],b[10];
    printf("Enter the 1st string:");
    scanf("%s",c);
    printf("Enter the 2nd string:");
    scanf("%s",b);
    int d=StrCmp(c,b);
    printf("%d",d);
    /*if(strcmp(c,b))
    {
        printf("string are greater\n");
    }
    else
    {
        printf("Not same\n");
    }*/
  //  STRUPR(c,0);
    printf("\n%s\n",c);
}
