#include<stdio.h>
/*void t_v(int *a,int u)
{
  if(u!=0)
  {
      printf("\n%d",*a);
      u--;
      a++;
      t_v(a,u);
  }
}
void search(int *a,int d,int u)
{
    if(d!=0)
    {
         
    }
}
void main()
{
    int n;
    printf("enter the number of element");
    scanf("%d",&n);
    int a[n];
    printf("enter the element");
    for(int i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    t_v(a,n);*/
void main()
{  
    int sum,b=0,i,j,n=3;
    for(i=1;i<=n;i++)
    {
        sum=0;
        for(j=1;j<=i;j++)
        {
            sum=sum+j;
        }
        b=b+sum;
    }
    printf("%d",b);

}