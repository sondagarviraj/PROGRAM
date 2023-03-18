#include<stdio.h>
void main()
{
    int a,b,c;
    printf("\n enter the value of a");
    scanf("%d",&a);
    printf("\n enter the value of b");
    scanf("%d",&b);
    printf("enter the value of c");
    scanf("%d",&c);
    if (a>b && a>c)
    {
        printf("\n a is grreter");
    }
    else if (b>a && b>c)
    {
        ("\n b is greter");
    }
    else if (c>a && c>b)
    {
        ("\n c is greter");
    }
    else
    {
        printf("all are same");
    }
    printf("\n good bye");
}