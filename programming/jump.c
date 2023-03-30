#include<stdio.h>
void main()
{
  int n;
  printf("the number of term u want");
  scanf("%d",&n);
  char c[n];
  printf("enter the char:");
  for(int i=0;i<n;i++)
  {
      scanf("%d",&c[i]);
  }
  for(int i=0;i<n;i++)
  {
      printf("%d is %d\n",i,c[i]);
  }
  printf("\n");


}