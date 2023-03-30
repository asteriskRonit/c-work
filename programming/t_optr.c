#include<stdio.h>
void main()
{
    int a,b,c,d,e,f,g;
    printf("enter the 6 element's:");
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    g=(a<b?(a<c?(a<d?(a<e?(a<f?a:f):e<f?e:f):d<e?(d<f?d:f):e<f?e:f):c<d?(c<e?(c<f?c:f):e<f?e:f):d<e?(d<f?d:f):e<f?e:f):b<c?(b<d?(b<e?(b<f?b:f):e<f?e:f):d<e?(d<f?d:f):e<f?e:f):c<d?(c<e?(c<f?c:f):e<f?e:f):d<e?(d<f?d:f):e<f?e:f);
    printf("smaller number is %d\n",g);
}
