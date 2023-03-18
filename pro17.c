#include<stdio.h>
void main()
{
    int number,answer,tamp
    printf("enter value of number");
    scanf("%d",&number);
    answer=number*(number-1);
    tamp=number-2;
    if(number<0)

    {
        printf("invalid");
    }
    else
    {
if (number<=2)
{
    printf("%d",number);
}
else
{
    do{
        answer=answer*tamp;
        tamp--;
    }while (tamp>0);
    pr("the value ans is %d",answer);
}
        
    }
}
