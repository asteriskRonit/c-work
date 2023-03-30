#include<stdio.h>
void main()
{
    //printf("%d\n",choice);
    int n=3,num,nn=3,m,choice;
    printf("Enter the length of the functiom:");
    scanf("%d",&num);
    int a[3]={1,2,3},sq,sum=0,count=0,c[3],d[3]={2,5,10};
    /*printf("enter the number of elem");
    scanf("%d",&n);*/
    char b[num];//={'x','^','3','+','x','^','2','+','3','x','+','3'};
    printf("1.check onto and into\n2.check many-one and one-one\nenter the choice:");
    scanf("%d",&choice);
    printf("Enter the function:");
    scanf("%d",&m);
    for(int i=0;i<num;i++)
    {
        scanf("%c",&b[i]);
        //printf("%d",b[i]);
    }

    //int choice;

    for(int i=0;i<3;i++)
    {
        count=0;
        for(int j=0;j<num;j++)
        {
            sq=0;
            num=0;
            //sum=0;
            if(b[j]>='a'&&b[j]<='z')
            {
                printf("hello");
                if(b[j+1]!=94)
                {
                    count+=a[i];
                    
                }
                else
                {
                    sum=a[i];
                    //printf("%d",j);
                }
            }
            if(b[j]>='1'&&b[j]<='9')
            {
                if(b[j+1]>='a'&&b[j+1]<='z')
                {
                  if(b[j+2]==94)
                  {
                      sq=1;
                      for(int k=0;k<(b[j+3]-48);k++)
                      {
                          sq=sq*a[i];
                      }
                      count+=sq*(b[j]-48);
                      j=j+3;
                  }  
                  else
                  {
                       count+=a[i]*(b[j]-48);
                       j++;
                  }
                }
                else
                {
                    count+=b[j]-48;
                } 
            }
            if(b[j]==94)
            {
                sq=1;
                for(int k=0;k<(b[j+1]-48);k++)
                {
                    sq=sq*sum;
                }
                //printf("%d\n",sq);
                sum=0;
                j=j+1;
                //printf("%d\n",sq);
                count=count+sq;
                //printf("%d",j);
                //printf("%d\n",count);
            }
              //printf("%d\n",sq);
            //printf("%d\n",sq);
            if(b[j]=='+')
            {
                //printf("%d ",j);
                if(b[j+1]>47&&b[j+1]<58)
                {
                  //printf("gus");
                  if(b[j+2]>='a'&&b[j+2]<='z')
                  {
                      if(b[j+3]==94)
                      {
                          //printf("heo\n");
                          sq=1;
                          for(int k=0;k<(b[j+4]-48);k++)
                          {
                             //printf("runnning\n");
                             sq=sq*a[i];
                          }
                          count+=sq*(b[j+1]-48);
                          //printf("%d\n",sq);
                          j=j+4;
                      }
                      else
                      {
                        //printf("%d",(b[j+1]-48)*a[i]);
                        count+=(b[j+1]-48)*a[i];
                        //printf("%d\n",count);
                        j=j+2;
                      }
                  }
                  else
                  {
                      //num=(b[j]-48);
                      count+=(b[j+1]-48);
                      //printf("%d\n",count);
                      j++;
                  }
                }
                if(b[j+1]>='a'&&b[j+1]<='z')
                {
                    //printf("%d",j);
                    if(b[j+2]=='^')
                    {
                        sq=1;
                        //sum=a[i];
                        for(int k=0;k<(b[j+3]-48);k++)
                        {
                            sq=sq*a[i];
                        }
                        //printf("%d\n",sq);
                        j+=3;
                        count+=sq;
                        //printf("%d\n",count);
                    }
                    else
                    {
                       count+=a[i];
                       //printf("%d\n",count);
                       j++;
                    }                
                }                
            }
            printf("%c\n",b[j]);
            //count=sq+sum+num;
        }

       //printf("%d\n",count);
       c[i]=count;
       //printf("%d\n",count);
    }
    printf("The root is...\n");
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",c[i]);
    }
    int e=0;
    for(int i=0;i<n;i++)
    {
        //e=0;
        for(int j=0;j<nn;j++)
        {
            if(c[i]==d[j])
            {
                e++;
            }
        }
    }
    //printf("%d",e);
    if(e!=n)
    {
       printf("\nNot a function");
    }
    else
    {
        printf("\nit is a function");
        if(choice==2)
        {
            e=0;
            for(int i=0;i<n-1;i++)
            {
                if(c[i]==c[i+1])
                {
                    e++;
                }
            }
            if(e!=0)
            {
                printf("\nmany-one");
            }
            else
            {
                printf("\none-one");
            }
        }
        else
        {
            printf("%d",nn);
            for(int i=0;i<nn;i++)
            {
                e=0;
                for(int j=0;j<n;j++)
                {
                    if(d[i]==c[j])
                    {
                        e++;
                        //break;
                    }
                }
                if(e==0)
                {
                    break;
                }

            }
            if(e==0)
            {
                printf("\ninto");
            }
            else
            {
                printf("\nonto");
            }
            
        }
        
    }
    
    printf("\n");

}
