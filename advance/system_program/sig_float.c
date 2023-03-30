#include<stdio.h>
#include<signal.h>
void signal_handler(int y)
{
    printf("You have got one error");
}
void main()
{
    signal(SIGFPE,signal_handler);
    float a=12,b=6;
    float c=a/b;
    printf("The result of the divide is : %f\n",c);

}