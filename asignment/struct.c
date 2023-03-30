#include<stdio.h>
 struct cv
 {
     char name[10];
     int roll_no;
     int marks[3];

 };

 void main()
 {
    /*struct cv s,*p;
    s.marks=10;
    p=&s;
    s.ptr=&s.marks;
    p->marks;
    printf("%p\n%p\n%p",&s,&s.ptr,p);
    printf("%d %d\n",*s.ptr,*p);
    int a=10,*p;
    p=&a;
    printf("%p",p);
     *p++;
    printf("%d",*p);
    struct cv s,s1;
    s.marks=10;
    s1.marks=11;
    add(s.marks,s1.marks);*/
    struct cv s[2];
    int short=11;
    for(int i=0;i<3;i++)
    {
        printf("enter the name:");
        scanf("%s",s[i].name);
        printf("enter the roll no:");
        scanf("%d",&s[i].roll_no);
        printf("enter the marks of 5 subject");
        for(int r=0;r<3;r++)
        {
          scanf("%d",&s[i].marks[r]);          
        }
    }
    printf("\n");
    for(int i=0;i<3;i++)
    {
        printf("name %s",s[i].name);
        printf("roll_no %d",s[i].roll_no);
        for(int r=0;r<3;r++)
        {
          printf("%d",s[i].marks[r]);          
        }
        printf("\n");
    }


 }
 mul
 /*
    //static process
    int m_l=1,ctrl,a,b;
    for(ctrl=1;ctrl<=10;ctrl++)
    {
        m_l*=ctrl;
    }
    printf("%d",m_l);
   //dynamic process through user
   printf("\nEnter The Series:");
   scanf("%d %d",&a,&b);
   m_l=1;
   for(;a<=b;a++)
   {
      m_l*=a;
   }
   printf("%d\n",m_l);
   //random number through finite loop
   m_l=1;
   for(ctrl=1;ctrl<=b;ctrl++)
   {
       printf("Enter the %d no:",ctrl);
       scanf("%d",&a);
       m_l*=a;
   }
   printf("%d\n",m_l);
   //random Number using infinite loop
   m_l=1;
   printf("Type 0 to stop the process\n");
   ctrl=1;
   for(;;)
   {
        printf("Enter the %d number",ctrl);
        scanf("%d",&a);
        if(a==0)
        {
            break;
        }  
        m_l*=a;  
        ctrl++;                 
   }
   printf("%d\n",m_l);

 */