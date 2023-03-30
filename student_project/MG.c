#include<stdio.h>
void main()
{
   int n,roll,m;
   char name[10];
   FILE *f,*f1,*f2;
   
   f1=fopen("tt.txt","r");
   fscanf(f1,"%d",&m);
   fclose(f1);
   do
   {
      printf("1--Entry\n");
      printf("2-Display\n");
      printf("3-search\n");
      scanf("%d",&n);
      if(n==1)
      {
          f=fopen("data.txt","a");
          printf("Enter the name:");
          scanf("%s",name);
          printf("Enter the roll number:");
          scanf("%d",&roll);

          fprintf(f,"%d\n",roll); 
          fprintf(f,"%s\n",name);
          

          m++;
          f1=fopen("tt.txt","w");
          fprintf(f1,"%d",m);
          fclose(f);
          fclose(f1);
      }
      else if(n==2)
      {  
          f2=fopen("data.txt","r");
          for(int i=0;i<m;i++)
          {
            fscanf(f2,"%d",&roll);
            fscanf(f2,"%s",name);

            printf("Name=%s\n",name);
            printf("ROll_no=%d\n",roll);
          }
          fclose(f2);
      }
      else if(n==3)
      {
        
        printf("Enter the roll no you are searching:");
        scanf("%d",&n);         
        f2=fopen("data.txt","r");
        for(int i=0;i<m;i++)
        {
          fscanf(f2,"%d",&roll);
          fscanf(f2,"%s",name);

          if(roll==n)
          {
            printf("\n----Record found-----\n");
            printf("Name=%s\troll=%d\n\n",name,roll);
            goto l;
          }
        }
        printf("\n---Records not found---\n\n");
        l:printf("");
        fclose(f2);

      }
      printf("Enter The choice 1/0:");
      scanf("%d",&n);
   } while (n!=0);

   
   //fclose(f1);
   
}