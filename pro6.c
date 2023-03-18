#include<stdio.h>
void main()
{
    int num1,num2,tamp=0;
    printf("num1=");
    scanf("%d",num1);//5
    printf("num2=");//10
    scanf("%d",num2);
    tamp=num1;//tamp=5
    num1=num2;//num1=10
    num2=tamp;//num2=5
    printf("num=%d",num1);
    printf("num2=%d",num2);

}