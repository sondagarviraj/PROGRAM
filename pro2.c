// +,-,/,*
#include<stdio.h>
void main()
{
    int num1,num2,answer;
    printf("enter the value of num1:");
    scanf("%d",&num1);
    printf("enter the value of num2:");
    scanf("%d",&num2);

    answer=num1+num2;
    printf("\n answer the value add %d",answer);
    answer=num1-num2;
    printf("\n answer the value sub %d",answer);
    answer=num1*num2;
    printf("\n answer the value mul %d",answer);
    answer=num1/num2;
    printf("\n answer the value div %d",answer);

}
