#include<stdio.h>
void main()
{
   
   //char c[11]={'x','+','3','/','3','x','+','/','1','+','5'}
    int n=3,num=5,nn=3,l=0;
    n=3,num=5;nn=3;
    int a[3]={1,2,3},sq,c[3],d[3]={4,12,7};
    float count=0,sum;
   char b[10]={'x','+','(','3','x','+','2',')','/','2'};
    for(int i=0;i<3;i++)
    {
        count=0;
        sum=0;
        for(int j=0;j<10;j++)
        {
            sq=0;
            num=0;
            //sum=0;
            if(b[j]>='a'&&b[j]<='z')
            {
                //printf("hello");
                if(b[j+1]==94||b[j+1]=='/')
                {

                    //printf("hello");
                    sum=a[i];
                    //printf("%f\n",sum);
                    //printf("%d",j);
                }
                else
                {
                    count+=a[i];
                    //printf("%f\n",count);
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
                      if(l==0)
                      {
                       //num=(b[j]-48);
                       count+=(b[j+1]-48);
                       //printf("%d\n",count);
                       j++;
                      }
                      else
                      {
                          //printf("helllo");
                          sum+=(b[j+1]-48);
                          j++;
                      }
                       
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
                    else if(b[j+2]=='/')
                    {
                        //printf("hello");
                        sum=a[i];
                        j++;
                    }
                    else
                    {
                       count+=a[i];
                       //printf("%d\n",count);
                       j++;
                    }                
                }                
            }
            if(b[j]=='/')
            {
                //printf("%d\n",j);
              if(b[j+1]>='1'&&b[j+1]<='9')
              {
                  //printf("hello");
                  if(b[j+2]>='a'&&b[j+2]<='z')
                  {
                      count+=sum/((b[j+1]-48)*a[i]);
                      j=j+2;
                  }
                  else
                  {
                      count+=sum/(b[j+1]-48);
                       //printf("%f\n",count);
                      j++;
                  }
              }
              if(b[j+1]>='a'&&b[j+1]<='z')
              {
                  //printf("hello");
                  //printf("%d",a[i]);
                  count+=sum/a[i];
                  //printf("%f\n",count);
                  j++;
              }
            }
            if(b[j]=='(')
            {
                l=1;
                if(b[j+1]>='1'&&b[j+1]<='9')
                {
                    if(b[j+2]>='a'&&b[j+2]<='z')
                    {
                        if(b[j+3]==94)
                        {
                            sq=1;
                            for(int k=0;k<(b[j+4]-48);k++)
                            {
                              sq=sq*a[i];
                            }
                            sum+=sq;
                            j=j+4;
                        }
                        else
                        {
                            sum=(b[j+1]-48)*a[i];
                            j=j+2;
                        }
                        
                    }
                    else
                    {
                        sum=(b[j+1]-48);
                        j++;
                    }
                    

                }
            }
            if(b[j]==')')
            {
                l==0;
            }
            //count=sq+sum+num;
        }
       printf("%f\n",count);
       //c[i]=count;
       //printf("%d\n",count);
    }

    /*char c='2';
    int i=4;
    float f=i/(c-48);
    printf("%f",f);
    if(f==2)
    {
        printf("hello");
    }*/
}