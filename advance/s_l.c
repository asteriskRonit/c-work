#include<stdio.h>
#include<string.h>
void main()
{
    int board[10][10]={{100,99,98,97,96,95,94,93,92,91},{81,82,83,84,85,86,87,88,89,90},{80,79,78,77,76,75,74,73,72,71}
    ,{61,62,63,64,65,66,67,68,69,70},{60,59,58,57,56,55,54,53,52,51},{41,42,43,44,45,46,47,48,49,50},{40,39,38,37,36,35,34,33,32,31},
    {21,22,23,24,25,26,27,28,29,30},{20,19,18,17,16,15,14,13,12,11},{1,2,3,4,5,6,7,8,9,10}};
    //char dice=100;
    int dice=0,sum=0;
    printf("\n");
    int sn[8]={99,97,95,81,65,52,32,25};
    int tale[8]={7,10,13,43,46,60,64,89};
    int tl[8]={89,33,6,21,19,9,26,12};
    int ld[14]={4,11,19,48,63,68,70,44,50,82,75,98,88,91};
    
    /*for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            for(int k=0;k<12;k++)
            {
                if(board[i][j]==v[k])
                {
                    printf(" #");
                    goto l1;
                }
            }
            printf(" %d",board[i][j]);
            l1:printf(" ");
        }
        printf("\n\n");
    }*/
    while(sum!=100)   
    {
        printf("🎲:");
        scanf("%d",&dice);
        if((sum+dice)<=100)
        {
            if(dice==1&&sum==0)
              sum=1;
            else if(sum!=0)
            {
               sum+=dice;
               for(int i=0;i<10;i++)
               {
                  for(int j=0;j<10;j++)
                  {
                      if(board[i][j]==sum)
                      {
                          int m;
                          for(m=0;m<8;m++)
                          {
                              if(sum==sn[m])
                              {
                                  sum=sum-tl[m];

                                  break;
                              }
                          }
                          if(sum>=90)
                             printf("| 🙈 ");
                          else if(sum>50)   
                            printf("| 🐵 ");
                          else
                            printf("| 😿 ");   
                      }
                      else
                      {
                        for(int k=0;k<8;k++)
                        {               
                             if(board[i][j]==sn[k])
                             {
                                 printf("| 🐍");
                                 goto l1;
                             }
                         }
                         for(int k=0;k<8;k++)
                         {
                             if(board[i][j]==tale[k])
                             {
                                 printf("| 🐷 ");
                                 goto dl;
                             }
                         }
                         for(int lo=0;lo<7;lo++)
                         {
                             if(board[i][j]==ld[lo])
                             {
                                 printf("| 🚀-->%d",ld[lo+7]);
                                 goto b1;
                             }   
                         }
                         if(sum==11)
                         {
                             sum=sum+39;
                         }
                         if(board[i][j]==100)
                           printf("| 🥇");
                         else  
                            printf("| %d",board[i][j]);
                         dl:b1:l1:printf(" "); 
                      }
                  }
                  printf("|\n\n");
               }
            }  
        }
        printf("\n");
    }
    printf("\n<<--------WINNER--------->>\n");
}