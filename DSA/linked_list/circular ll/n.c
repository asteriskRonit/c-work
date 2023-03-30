#include<stdio.h>
#include<stdlib.h>
struct priyangshu
{
    int number;
    struct priyangshu *address;
};
void main()
{
    struct priyangshu *beast,*mr_beast;
    beast=(struct priyangshu *)malloc(sizeof(struct priyangshu));
    mr_beast=beast;
    printf("\nEnter -1 to stop\n");
    printf("Enter the number:");
    scanf("%d",&beast->number);
    for(;;)
    {
        beast->address=(struct priyangshu *)malloc(sizeof(struct priyangshu));
        printf("Enter the number:");
        scanf("%d",&beast->address->number);
        if(beast->address->number==-1)
        {
           beast->address=NULL;
           break;
        }
        beast=beast->address;
    }
    printf("\n-------Traversing------\n");
    beast=mr_beast;
    for(;;)
    {
        if(beast->address!=NULL)
          printf("%d---->",beast->number);
        else
        {
            printf("%d\n",beast->number);
            break;
        }  
        beast=beast->address;
    }


}