// write a program to 5 country time in hours,min_sec
#include<stdio.h>
#include<stdlib.h>
struct time
{
    int hours;
    float min_sec;
    char name;
} country3;
void main()
{
struct time country1, country2;
printf("enter country1 hours");
scanf("%d",&country1.hours);
printf("enter country1 min_sec");
scanf("%f",&country1.min_sec);
fflush(stdin);
printf("enter country1 first latter:");
scanf("%c",&country1.name);

printf("enter country2 hours");
scanf("%d",&country2.hours);
printf("enter country2 min_sec");
scanf("%f",&country2.min_sec);
fflush(stdin);
printf("enter country2 first latter:");
scanf("%c",&country2.name);

printf("enter country3 hours");
scanf("%d",&country3.hours);
printf("enter country3 min_sec");
scanf("%f",&country3.min_sec);
fflush(stdin);
printf("enter country3 first latter:");
scanf("%c",&country3.name);

printf("the time of country1 is hours : %d, min_sec : %f and first latter : %c",
 country1.hours, country1.min_sec, country1.name);    

 printf("the time of country2 is hours : %d, min_sec : %f and first latter : %c",
 country1.hours, country2.min_sec, country1.name);  

 printf("the time of country3 is hours : %d, min_sec : %f and first latter : %c",
 country1.hours, country3.min_sec, country1.name);      

}
