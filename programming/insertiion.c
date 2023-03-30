#include<stdio.h>
/*void show(int s);
int fg(int p);*/
void main()
{
 int a[5]={1,2, 4,3},p;
 for(int i=0;i<5;i++)
 {
   if(a[i] == '\0')
   {
     printf("%d \n",i);
   }
 
 
 }
 
 printf("enter the position where u wnat to insert : ");
 scanf("%d \n",&p);
 
 for(int i=3;i>p-1;i--)
 {
   a[i+1]=a[i];
 
 }
 
 
 
 for(int y=0;y<5;y++)
 {
   printf("%d",a[y]);
 
 }


/*
show(3);
int p;
p=6;
fg(p);
*/
}

/*void show(int s)
{
  
  printf("enter the number of range");
  scanf("%d",&s);
  
  int a[s];
  
  for(int i=0;i<s;i++)
  {
    printf("enter the %d number :", i+1);
    scanf("%d",&a[i]);
  } 
    
  for(int y=0;y<s;y++)
  {
    printf("%d \n",a[y]);
  }
 
 int fg(int p)
 {
 
   printf("%d",p);
   return 1;
 
 } 
  
  
 
}*/ 
