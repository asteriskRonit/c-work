#include<stdio.h>
void fc(int n)
{
    if(n<=90)
    {
        printf("%c",n);
        n++;
        fc(n);
    }

}
void main()
{
    fc(65);


}


















    /*int z=6,k=0;
    for(int i=1;i<=5;i++)
    {
        for(int j=1+k;j<=i;j++)
        {
            printf("%d ",z-j);
        }
        z--;
        printf("\n");
        if(i==4)
        {
            k=1;
        }
    }
       for(int i=1;i<=4;i++)
    {
        printf("%c ",64+i);
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }*/