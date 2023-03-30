#include<stdio.h>
#include<string.h>
struct std
{
    char name[10];
    int roll;
};
typedef struct std v;
//descending order
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
void main()
{
   v sr[10];
   int n;
   printf("Enter the no of records you want to store:");
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       printf("Enter the name:");
       scanf("%s",sr[i].name);
       printf("Enter roll no:");
       scanf("%d",&sr[i].roll);
   }
   printf("\n----Records----\n\n");
   printf("Roll_no\t\tName\n");
   for(int i=0;i<n;i++)
   {
       printf("%d\t\t%s\n",sr[i].roll,sr[i].name);
   }
   dsc_ord(sr,n);
   printf("\n\n----After sorting---\n\n");
   printf("Roll_no\t\tName\n");
   for(int i=0;i<n;i++)
   {
       printf("%d\t\t%s\n",sr[i].roll,sr[i].name);
   }
   printf("Enter the roll no you are searching:");
   int key;
   scanf("%d",&key);
   int left=0,right=n-1;
   int mid;
   int o=0;
   //bubble sorting
   while(left<=right)
   {
       mid=(left+right)/2;
       if(sr[mid].roll==key)
       {
           o++;
          printf("--Search found--\n");
          break;
       }
       else if(sr[mid].roll>key)
          left=mid+1;
       else
         right=mid-1;   
   }
   if(o==1)
        printf("%d\t\t%s\n",sr[mid].roll,sr[mid].name);
   else
      printf("\nContent no found\n");
   printf("Enter the position you want to insert:");
   scanf("%d",&key);
   for(int i=n;i>key;i--)   
   {
              int t=sr[i].roll;
              sr[i].roll=sr[i-1].roll;
              sr[i-1].roll=t;

              char h[10];
              strcpy(h,sr[i].name);
              strcpy(sr[i].name,sr[i-1].name);
              strcpy(sr[i-1].name,h);
   }
   //inserting elements
   printf("Enter the name and roll no:");
   scanf("%s %d",sr[key].name,&sr[key].roll);
   printf("\n----Records----\n\n");
   printf("Roll_no\t\tName\n");
   n++;
   for(int i=0;i<n;i++)
   {
       printf("%d\t\t%s\n",sr[i].roll,sr[i].name);
   }
}