#include<stdio.h>
void main()
{
    int year;
    printf("enter the year");
    scanf("%d",&year);
    if(year % 1000 == 0)
    {
        printf("\n it is millennium year");
    }
    printf("\n good bye");
}