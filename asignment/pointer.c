#include <stdio.h>
/*void main()
{
  /*int a[2][5]={{1,2,3,4,5},{6,7,8,9,10}},*p;
  p=a;
  for(int i=0;i<2;i++)
  {
      for(int j=0;j<5;j++)
      {
          printf("%d",*p);
          p++;
      }
      printf("\n");
  }
  printf("\n");
}*/
  /*struct student
  {
      char name[20];
      int roll_no;
      float marks;
  };*/
  void main()
  {
      /*struct student s1[2];
      for(int i=0;i<2;i++)
      {
          printf("enter the roll number of the student:");
          scanf("%2d",&s1[i].roll_no);
          printf("enter the marks of the student:");
          scanf("%2f",&s1[i].marks);
          
      
      }
      for(int j=0;j<2;j++)
      {
        
          printf(" the roll number of the student is:-%d\n",s1[j].roll_no);
          printf(" the marks of the student is:-%.2f\n",s1[j].marks);
      }
      char c[10];
      c[10]="ronit";
      printf("%s",c[10]);
      char c='a';
      printf("enter the chracter: ");
      c=getchar();
      putchar(c);*/
      void *p;
      int a=10;
      float b=20.34;
      p=&a;
      printf("%d\n",*(int*)p);      

  }
  


