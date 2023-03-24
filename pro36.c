#include<stdio.h>
#include<stdlib.h>
struct date
{
    int date,month,year;
    char name;
};
void main()
{
    struct date country[4];
    int count;
    for (count=0;count<4;count++)
    {
        printf("enter date for country %d",count+1);
        scanf("%d",&country[count].date);
        printf("enter month for country %d",count+1);
        scanf("%f",&country[count].month);
        printf("enter year for country %d",count+1);
        scanf("%d",&country[count].year);
        fflush(stdin);
        printf("enter name for country %d",count+1);
        scanf("%c",&country[count].name);
    }
    for (count=0;count<4;count++)
    {
        printf("\n the date of country %d month: %d year: %f year: %c name", country+1,country[count],country[count].month,country[count].name);
    }
    


}
   