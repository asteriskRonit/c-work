#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch,ch1;
    do
    {
        printf("Student Database");
        printf("\n\t(1)--Create Database.");
        printf("\n\t(2)--Display data.");
        printf("\n\t(3)--Search.");
        printf("\n\t(4)--Add data.");
        printf("\nEnter one option:");
        scanf("%d",&ch);
        if(ch==1)
        {
            create_db();
        }
        else if(ch==2)
        {
            display_db();
        }
        else if(ch==3)
        {
            search_db();
        }
        else if(ch==4)
        {
            append_db();
        }
        printf("\nEnter 1/0:");
        scanf("%d",&ch1);
    }while(ch1!=0);

    return 0;
}
