#include<stdio.h>
void main();
{

    int foot,inch
    float weight,totalinch,meter,bmi
    printf("enter the value of weight into kg");
    scanf("%f",&weight);
    printf("enter value foot");
    scanf("%f",&foot);
    printf("enter value of inch");
    scanf("%f",&inch);
    totalinch=foot*12;
    totalinch=totalinch+inch;
    meter=totalinch/39.37;
    bmi=weight/(meter*meter);
    printf("the value of bmi %f",bmi);

}
