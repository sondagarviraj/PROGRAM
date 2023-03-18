#include<stdio.h>
#include<stdlib.h>
void main()
{
    int num1,num2;
    float ans;
    char name;
    printf("enter the value of num1");
    scanf("%d",&num1);
    printf("enter the value of num2");
    scanf("%d",&num2);
    ans=num1+num2;
    printf("\n answer the add %f",ans);
    printf("\n enter the name");
    fflush(stdin);
    scanf("%c",&name);

}