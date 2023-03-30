#include<stdio.h>
#include<string.h>
struct std
{
    char name[10];
    int roll;
};
typedef struct std v;
void dr()
{
   printf("hello");
}
void dsc_ord(v s[],int n1)
{
  for(int i=0;i<n1-1;i++)
  {
      for(int j=i+1;j<n1;j++)
      {
          if(s[i].roll<s[j].roll)
          {
              int t=s[i].roll;
              s[i].roll=s[j].roll;
              s[j].roll=t;

              char h[10];
              strcpy(h,s[i].name);
              strcpy(s[i].name,s[j].name);
              strcpy(s[j].name,h);
          }
      }
  }
}