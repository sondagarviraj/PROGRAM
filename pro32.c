#include<stdio.h>
float getpi()
{
    float pi=3.14;
    return pi;
}
void main()
{
    float redius,pi,ans;
    printf("enter the value of redius:");
    scanf("%f",&redius);
    pi=getpi();
    ans=redius*redius*pi;
    printf("the area of circle is %f",ans);
}