#include<stdio.h>

typedef struct abir{
    char name;
    int roll;
    int class;
}a;

void program(){

    a stu1;
    stu1.name = 'D';
    stu1.roll = 12;
    stu1.class = 10;
    printf("Name : %c \nRoll.no.: %d,\nClass : %d\n", stu1.name, stu1.roll, stu1.class);
}

void main()
{
/*    int a[3]={1,2,3};
    for(int i=0;i<3;i++)
    {
        printf("%p\t%p\n",a+i,&a[i]);
    }
  printf("%p",&a);
  long int a=10,*p;
  p=&a;
  printf("%ld",*p);
  a++;
  *p++;
  printf("\n%ld\t%ld\t%p",a,*p,p);*/
  /*int *p,a[3];
  p=&a[0];
  *p=2;
  printf("%p",&a[0]);
  printf("\nValue of the Pointer (before) -> %d",*p);
  *p++;
  printf("\nValue of the Pointer (after) -> %d",*p);
  printf("\nPointer without *");
  printf("\nValue of the Pointer (before) -> %d",*p);
  p++;
  printf("\nValue of the Pointer (after) -> %d\n\nThe Value of a[0] is %d",*p, a[0]);*/
//   int a[3]={1,2,3},*p;
//   p=&a[0];
//   printf("\n%p",&p);
//   printf("\n%p",&a[1]);
//   printf("\n%p",&p);

program();

    

}