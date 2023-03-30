#include<stdio.h>
void main()
{

  int a,b,c;
  a=1234;
  b=a%10;
  c=c+b;
  a/=10;
  b=a%10;
  c=c+b;
  a/=10;
  b=a%10;
  c=c+b;
  a/=10;
  b=a%10;
  c=c+b;
  printf("%d",c);
  

}

