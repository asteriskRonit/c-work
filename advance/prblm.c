#include<stdio.h>
#include<stdbool.h>
bool std(int a,int b)
{
    if(a>b)
      return true;
    return false;  
}
void main()
{
    printf("%d",std(10,11));
}