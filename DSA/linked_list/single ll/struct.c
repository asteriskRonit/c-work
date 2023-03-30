#include<stdio.h>
#include<string.h>
struct std
{
    int a;
    float b;
    char name[10];
};
void main()
{
    struct std s,n;
    s.a=10;
    s.b=4.5;
    strcpy(s.name,"ronit");
    n=s;
    printf("%d %f %s",n.a,n.b,n.name);
}