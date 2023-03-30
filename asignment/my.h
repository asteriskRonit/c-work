void add(int a,int b)
{
    printf("the added value is=%d",a+b);
}
void matrix_mul(int a,int b,int c,int d)
{
    int r=0;
    if(b!=c)
    {
        printf("enter it properly");
    }
    else
    {
        int array_1[a][b],array_2[c][d],result[a][d];
        printf("enter the element of first matrix :\n");
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                scanf("%d",&array_1[i][j]);
            }
        }
        printf("enter the element of second matrix :\n");
        for(int i=0;i<c;i++)
        {
            for(int j=0;j<d;j++)
            {
                scanf("%d",&array_2[i][j]);
            }
        }

        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                printf("| %d ",array_1[i][j]);
            }
            printf("|\n");
        }
        printf("\n");
        for(int i=0;i<c;i++)
         {
            for(int j=0;j<d;j++)
            {
                printf("| %d ",array_2[i][j]);
            }
            printf("|\n");
         }
    
        
       for(int l=0;l<d;l++)
        {
            for(int g=0;g<a;g++)
            {
                for(int t=0;t<b;t++)
                {
                   r+=array_1[g][t]*array_2[t][l];
                }
              result[g][l]=r;
              r=0;
            }

        }
        printf("\n");
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<d;j++)
            {
                printf("| %d ",result[i][j]);
            }
            printf("| \n");
        }
        
                                                                                                  
                                

    }
}

void selection_sort(int a)
{
     int array_slc[a],r,c;
     printf("enter the value of array");
     for(int i=0;i<a;i++)
     {
        scanf("%d",&array_slc[i]);
     }
     for(int i=0;i<a-1;i++)
     { 
         r=i;
         for(int j=i+1;j<a;j++)
         {
             if(array_slc[j]<array_slc[r])
             {
                 r=j;
             }
         }
        c=array_slc[r];
        array_slc[r]=array_slc[i];
        array_slc[i]=c;
     }
     for(int i=0;i<a;i++)
     {
        printf("%d",array_slc[i]);
     }
    

}

void reverse_sentence(char c[20])
{ 
    
    for(int i=29;i>=0;i--)
    {
          printf("%c",c[i]);
    }
    printf("\n");
  

}

void factorial_no(int a)
{
   int f=1;
   for(int i=1;i<a+1;i++)
   {
      f*=i;
   }
   printf("%d",f);

}
void lcm(int a,int b)
{
   int m;
   m=(a>b)?a:b;
   while(1)
   {
       if(m%a==0 && m%b==0)
       {
           printf("the lcm of %d and %d is %d",a,b,m);
           break;
       }
       ++m;
   }
}
void binary_num(int b)
{
    int a[20],r,i;
    i=0;
    while(b!=0)
    {
        r=b%2;
        a[i]=r;
        i++;
        b/=2;
    }
    for(int y=i-1;y>=0;y--)
    {
        printf("%d",a[y]);
    }
    printf("\n");

}
void hcf(int a,int b)
{
    int c,m;
    c=(a>b)?a:b;
    for(int i=1;i<c;i++)
    {
        if(a%i==0 && b%i==0)
        {
            m=i;
        }
    }
    printf("%d\n",m);
}
void fac_no(int a)
{
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            printf("%d ",i);
        }
    }
    printf("\n");
}
void print()
{
  printf("Hello");
}  
