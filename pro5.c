#include<stdio.h>
void main()
{
    int num1,num2;
    printf("num1=");
    scanf("%d",&num1);
    printf("num2=");
    scanf("%d",&num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("num1=%d",num1);
    printf("\nnum2=%d",num2);


}