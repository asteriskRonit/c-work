#include<stdio.h>

void append_db()
{
    int n;
    char N[10];
    int R,M;

    FILE *f1,*f2;
    f1=fopen("studdata.txt","a");
    f2=fopen("total.txt","r");
    fscanf(f2,"%d",&n);
    printf("Enter student name:");
    scanf("%s",N);
    printf("\nEnter rollno=");
    scanf("%d",&R);
    printf("\nEnter marks=");
    scanf("%d",&M);
    fprintf(f1,"%s\n",N);
    fprintf(f1,"%d\n",R);
    fprintf(f1,"%d\n",M);
    n++;
    fclose(f1);
    fclose(f2);
    f2=fopen("total.txt","w");
    fprintf(f2,"%d",n);

    fclose(f2);
    printf("\nData added...");

}
