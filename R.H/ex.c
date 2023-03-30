#include<stdio.h>
void main()
{
   /*subtraction part*/
  /*int sub,ctrl,a,b;
  float div;
  //static process
  div=1;
  for(ctrl=2;ctrl<=5;ctrl++)
  {
      div/=ctrl;
      
  } 
  printf("The Output Of The static Series Is=%f\n",div);
  //Dynamic process
  printf("\nEnter The Range");
  scanf("%d %d",&a,&b);
  div=a;
  for(ctrl=a+1;ctrl<=b;ctrl++)
  {
     div/=ctrl;
  }
  printf("The Output of Dynamic series is=%f",div);

  //random finite process
  printf("\n\nEnter the range");
  scanf("%d",&b);
  printf("Enter the element");
  scanf("%d",&a);
  div=a;
  for(ctrl=1;ctrl<b;ctrl++)
  {
     printf("enter the number");
     scanf("%d",&a);
     div/=a;

  }
  printf("The Finite Random Output Is%f\n",div);
  //random infinite process
  printf("\n\nEnter 0 to stop the process\n");
  printf("Enter The Number:");
  scanf("%d",&a);
  div/=a;
  for(;;)
  {
     printf("Enter The Number:");
     scanf("%d",&a);
     if(a==0)
     {
        break;
     }
     div/=a;
  }
  printf("The output Of Infinite Random number is=%f\n\n",div);*/
  for(int i=5;i>=1;i--)
  {
     for(int j=5;j>=i;j++)
     {
        printf("*");
     }
  }
  printf("\n");
}