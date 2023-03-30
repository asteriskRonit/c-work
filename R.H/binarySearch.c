#include <stdio.h>

void traverse(int *dataLoc, int range)
{
    if (range != 0)
    {
        printf("%d", *dataLoc);
        if (range > 1)
            printf(", ");
        traverse(++dataLoc, --range);
    }
}

int insertion(int *dataLoc, int range)
{
    if (range != 0)
    {
        int dataNum;
        printf("%d-", *dataLoc);
        insertion(++dataLoc, --range);
    }
}

void main()
{
    int data[20] = {8, 4, 2, 1, 7, 3, 9, 45, 86, 34, 65, 34, 23},
        range;
    printf("Enter the number of elements required : ");
    scanf("%d", &range);
    printf("Elements are : ");
    insertion(data, range);
    printf("\n");
}
