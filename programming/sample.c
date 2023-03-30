#include <stdio.h>

/*void haha()
{
    /*char name[2];
    printf("Enter : ");
    scanf("%c%c", &name[0], &name[1]);
    printf("\nname[0] = %c name[1] = %c", name[0], name[1]);
    int n;
    printf("number");
    scanf("%d", &n);
    char c[n];
    scanf("%c", &c[0]);
    printf("enter the char:");
    for (int i = 0; i < n; i++)
    {
        scanf("%c", &c[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d is %d\n", i, c[i]);
    }
}

void Nac()
{
    int i = 1, j, n, s, add = 0;
    printf("enter the cycle");
    scanf("%d", &n);
    do
    {
        j = 1;
        s = i - 1;
        printf("(");
        do
        {
            add += j;
            printf("%d", j);
            if (s > 0)
            {
                printf("+");
                s--;
            }
            j++;
        } while (j <= i);
        printf(")");
        if (i < n)
        {
            printf("+");
        }
        i++;
    } while (i <= n);
    printf("=%d\n", add);
}

int DaddR(int ct, int sum)
{
    if (ct <= 1)
    {
        return sum;
    }
    else
    {
        int a, b;
        printf("\nEnter two numbers : ");
        scanf("%d %d", &a, &b);
        sum += a + b;
        ct--;
        DaddR(ct, sum);
    }
}

void dRecAdd()
{
    int res = DaddR(5, 0);
    printf("%d", res);
}

int Radd(int a, int d)
{
    if(a<=5)
    {
        d+=a;
        a++;
        Radd(a,d);
    }
    else
    {
        return d;
    }
    
}*/
int add(int a,int b)
{
    return a+b;
}
void haha()
{
   int n,a;
   int b[5]={1,2,3,4,5};
   printf("enter the limit");
   scanf("%d",&n);
   char c[n];
   printf("Enter the character");
   scanf("%d",&a);
   for(int i=0;i<n;i++)
   {
     scanf("%c",&c[i]);
   }
   for(int i=0;i<n;i++)
   {
       printf("%d is %c\n",i,c[i]);
   }
   for(int i=0;i<5;i++)
   {
       printf("%d",b[i]);
       for(int j=0;j<n;j++)
       {
           printf("%c",c[j]);
       }
   }

}


void main()
{
    printf("\u263a\n");  
}