//#include"Amar.h"
#include<stdio.h>
struct std
{
  unsigned a: 1;
  int b: 23;
};
void main()
{
  struct std sd;
  if(sd.a)
    printf("%d %d\n",sd.a,sd.b);
}
