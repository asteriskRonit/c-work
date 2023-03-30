#include<stdio.h>
float power(void *x,void *y,int count)
{ 
    int t=1;
    float f=1.0;
    if(count==1)
    {
      
        for(int i=0;i<*(int *)y;i++)
            t*=*(int *)x;
        return t;    
    }
    for(int i=0;i<*(int *)y;i++)
    {
        f*=*(float *)x;
       // printf("%f %d",f,*(int *)y);
    }    
   // printf("%f",f);
    return f;    
}
void main()
{
    int pow;
    float q;
    float a=2.5;
    int b=2;
    int c=0;
    if(c==1)
    { 
      pow=power(&a,&b,c);
      printf("%d\n",pow);
    }  
    else
    {
      q=power(&a,&b,c); 
      printf("%f\n",q);  
    }  
}