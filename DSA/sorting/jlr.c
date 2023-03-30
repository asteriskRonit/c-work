#include<stdio.h>
#include<stdlib.h>
void func1();
void func2();
void __attribute__((constructor)) func1();
void __attribute__((destructor)) func2();
#pragma warn -rvl;
//#pragma GCC poison printf;
#pragma pack(1)
int a=10;
void func1()
{
    printf("Hello");
}
void func2()
{
    a++;
    printf("%d",a);
}
struct std
{
    int a;
    char c;
    float d;
};
void main()
{
    struct std a;
    printf("%ld",sizeof(a));
   /* FILE *k;
    int c;
    k=fopen(__FILE__,"r");
    do
    {
        c=getc(k);
        putchar(c);
      //  printf("\n");
    } while (c!=EOF);
    fclose(k);*/

   //printf("Iam here ronit main()\n");
  // printf("hello");

}