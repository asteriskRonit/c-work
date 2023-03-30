#include<iostream>
#include<string.h>
#include"greeting.h"
using namespace std;
class td
{
    public:
    virtual void re()=0;
    void fg()
    {
        printf("hello");
    }
};
class ste:public td
{
   public:
   void re()
   {
       cout<<"hello world\n";
   }
};
int main()
{
   /* ste r;
    td *t;
    t=&r;
    t->re();
    t->fg();
    return 0;*/
    jkb();
    return 0;
}