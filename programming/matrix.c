#include<stdio.h>
void main()
{
 int a[2][3][3];
 int b[3][3];
 int r;
 r=0;
 
 for(int i=0;i<2;i++)
 {
   printf("enter the value of matrix %d \n \n",i+1);
    for(int j=0;j<3;j++)
    {
      printf("enter the value of row %d \n \n ",j+1);
      
       for(int k=0;k<3;k++)
       {
          printf("enter the value of coloumn %d : ",k+1);
          scanf("%d",&a[i][j][k]);
            
       }
       printf("\n");
    }
 }

for(int i=0;i<2;i++)
{
    for(int j=0;j<3;j++)
     {
       for(int k=0;k<3;k++)
       {
          printf("|%d",a[i][j][k]);          
       }
       printf("| \n");
     }
     printf("\n"); 
}

for(int t=0;t<3;t++)
{
  for(int y=0;y<3;y++)
  {
    for(int f=0;f<3;f++)
    {
       r+=a[0][y][f]*a[1][f][t];
       
    }
    b[y][t]=r;
    r=0;
  
  }
}


    for(int j=0;j<3;j++)
     {
         for(int k=0;k<3;k++)
         {
           printf("|%d",b[j][k]);         
         }
       printf("| \n");    
     }
     printf("\n");
  








}

