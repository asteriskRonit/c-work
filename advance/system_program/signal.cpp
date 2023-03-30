#include<iostream>
#include<signal.h>
#include<unistd.h>
using namespace std;
void handle_signal(int n)
{
   cout<<"Terminated\n";
}
int main()
{
    signal(SIGINT,handle_signal);
    for(int i=0;;i++)
    {
      printf("Hello world\n");
      sleep(1);
    }
    return 0;
}