// example of arry structure

#include<stdio.h>
#include<stdlib.h>
struct time
{
    int hours;
    float min_sec;
    char name;
};
void main()
{
    struct time country[3];
    int count;
    for (count=0;count<3;count++)
    {
        printf("enter hours for country %d",count+1);
        scanf("%d",&country[count].hours);
        printf("enter min_sec for country %d",count+1);
        scanf("%f",&country[count].min_sec);
        fflush(stdin);
        printf("enter name for country %d",count+1);
        scanf("%c",&country[count].name);
    }
    for (count=0;count<3;count++)
    {
        printf("\n the time of country %d hours: %d min_sec: %f min_sec: %c name", country+1,country[count],country[count].min_sec,country[count].name);
    }
    


}
   
    

