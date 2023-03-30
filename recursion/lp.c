#include<stdio.h>
int c=5;
void main()
{
    int c=10;
    printf("%d\n",::c);
    /*for(int i=1;i<=5;i++)
    {
        c=0;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==1)
        {
            printf("%d is a prime\n",i);
        }
        else
        {
            printf("%d is not a prime\n",i);
        }
        
    }*/
}