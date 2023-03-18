#include<stdio.h>
void main()
{
    int number,first,second;
    printf("enter the value number");
    scanf("%d", &number);
    first=number/10;
    second=number%10;
    printf("this is first ans %d \n this is second ans %d",first,second);
}