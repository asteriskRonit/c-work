#include <stdio.h>
#include "my.h"
void main()
{
   /* float dis;
    printf("enter the distance between two cities : ");
    scanf("%f",&dis);
    printf("distance in meter %f\ndistance in feet %f\ndistance in inches %f\ndistance in centimeter %f",
    dis*1000,dis*3280,dis*39370,dis*10000);*/
    add(2,3);

}

 

     /*
      //five student aggregate and percentage 
   float f,a,b,c,d,e;
   printf("enter the number of first subject : ");
   scanf("%f",&a);
   printf("enter the number of second subject : ");
   scanf("%f",&b);
   printf("enter the number of third subject : ");
   scanf("%f",&c);
   printf("enter the number of fourth subject : ");
   scanf("%f",&d);
   printf("enter the number of first subject : ");
   scanf("%f",&e);
   f=a+b+c+d+e;
   printf("the sum of number is %.2f \nthe total percent is %.2f \n",f,f/500*100);


  

       //farhenite to celcius
  float f;
  printf("enter the temperature in farhenite : ");
  scanf("%f",&f);
  printf("the temperature is %.2f degree celcius \n",(f-32)*5/9);

       //perimeter area of rectangle and circle
     float length,breadth,radius;
     printf("enter the length and breadth : ");
     scanf("%f %f",&length,&breadth);
     printf("enter the radius : ");
     scanf("%f",&radius);
     printf("The perimeter of rectangle is : %f \nThe area of rectangle is : %f",2*(length+breadth),length*breadth);
     printf("\nthe circumference of circle is : %f \nthe area of circle is : %f",2*3.14*radius,3.14*radius*radius);





    int number,remainder,sum=0;
  printf("enter the number : ");
  scanf("%d",&number);
  while(number!=0)
  {
    remainder=number%10;
    sum=sum*10+remainder;
    number/=10;
  }
  printf("the reverse order is : %d \n",sum);

    //interchanging the contents between two variables
  int c,d,e;
  printf("enter the value of c and d : ");
  scanf("%d %d",&c,&d);
  e=c;
  c=d;
  d=e;
  printf("%d %d",c,d);



  int number,remainder,sum=0;
  printf("enter the number : ");
  scanf("%d",&number);
  while(number!=0)
  {
    remainder=number%10;
    sum=sum+remainder;
    number/=10;
  }
  printf("the reverse order is : %d \n",sum);

     int a,c,r,d;
   a=12391;
   c=1;
   d=a;
   while(d!=0)
   {
     r=a+c;
     a=r;
     c*=10;
     d/=10;

   }
   printf("%d",a);
   
     float population,men,women,ilmen,ilwomen,limen,liwomen;
  population=80000;
  men=(52*population)/100;
  women=population-men;
  limen=(35*men)/100;
  ilmen=men-limen;
  liwomen=(48*population)/100-women;
  ilwomen=women-liwomen;
  printf("iliterate men and women is : %.2f %.2f",ilmen,ilwomen);*/