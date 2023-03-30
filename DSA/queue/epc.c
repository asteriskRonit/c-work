#include<stdio.h>
void main()
{
  int a[10],n;
  printf("Enter the no of terms you required");
  scanf("%d",&n);
  printf("Enter the no:");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("After input:");
  for(int i=0;i<n;i++)
  {
    printf("%d",a[i]);
  }
  printf("\n");
  }
