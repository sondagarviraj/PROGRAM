// num1=1000,num2=500;
// num1=500,num2=1000;

#include<stdio.h>
void main()
{
    int num1=1000,num2=500,ans;
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("num1=%d",num1);
    printf("\nnum2=%d",num2);




}