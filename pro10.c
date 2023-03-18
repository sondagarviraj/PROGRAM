#include<stdio.h>
void main()
{
    float weight,bmi,cm,meter;
    printf("enter the weight");
    scanf("%f",&weight);
    printf("enter the heaight to cm");
    scanf("%f",&cm);
    meter=cm/100;
    printf("\n the value of meter %f",meter);
    bmi=weight/(meter*meter);
    printf("\n the value bmi %f",bmi);

}