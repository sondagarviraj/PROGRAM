#include<stdio.h>
void main()
{
    int a,b,answer,option;
    printf("enter the value a");
    scanf("%d", &a);
    printf("enter the value b");
    scanf("%d", &b);
    printf("\n enter the value of 1 ad1");
    printf("\n enter the value of 2 sub");
    printf("\n enter the value of 3 mul");
    printf("\n enter the value of 4 div");
    printf("\n enter the value of 5 module");
    printf("\n enter the value of 6 max");
    printf("\n enter the value of 7 mdn");
    printf("\n enter the value of 8 eql");
    printf("\n select the any option from above");
    scanf("%d", &option);
    if (option==1)
    {
        answer=a+b;
        printf("the value of add %d", answer);
    }
    else if (option==2)
    {
        answer=a-b;
        printf("the value of sub %d", answer);
    }
    else if (option==3)
    {
        answer=a*b;
        printf("the value of mul %d", answer);
    }
    else if (option==4)
    {
        answer=a/b;
        printf("the value of div %d",answer);
    }
    else if (option==5)
    {
       answer=a%b;
       printf("the value of module %d",answer);
    }
     else if (option==6)
    {
        if (a>b)
        {
            printf("a is greter");
        }
        else
        {
            printf("b is greter");
        }
    }    

    else if(option==7)
    {

    
        if (a<b)
        {
             printf("a is lassthan");
        }
        else
        {
             printf("b is lassthan");
        }
    }
     else if (option==8)
    {
        if (a==b)
        {
            printf("a and b is eql");
        }
        else
        {
            printf("non eql");
        }
    }
    printf("good bye");
}
    
    

