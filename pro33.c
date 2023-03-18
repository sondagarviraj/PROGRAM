// write program to create a clac

#include <stdio.h>
int getadd(int num1, int num2)
{
    return num1 + num2;
}
int getsub(int num1, int num2)
{
    return num1 - num2;
}
int getmul(int num1, int num2)
{
    return num1 * num2;
}
int getdiv(int num1, int num2)
{
    return num1 / num2;
}
int getmodule(int num1, int num2)
{
    return num1 % num2;
}
int max(int num1, int num2)
{
    if (num1 > num2)
    {
        printf("num1 greter");
    }
    else
    {
        printf("num2 greter");
    }
    
}
int min(int num1, int num2)
{
    if (num1 < num2)
    {
        printf("num1 lessthen");
    }
    else
    {
        printf("num2 lessthen");
    }
    
}
int eql(int num1, int num2)
{
    if (num1 == num2)
    {
        printf("both are eql");
    }
    else
    {
        printf("both are not eql");
    }
    
}

void main()
{
    int num1, num2, option, countiune = 1;
    float ans;

    do
    {
        printf("enter num1:");
        scanf("%d",&num1);
        printf("enter num2:");
        scanf("%d",&num2);
        printf("\n enter 1add:");
        printf("\n enter 2sub:");
        printf("\n enter 3mul:");
        printf("\n enter 4div:");
        printf("\n enter 5module:");
        printf("\n enter 6max:");
        printf("\n enter 7min:");
        printf("\n enter 8eql:");
        printf("\n enetr option:");
        scanf("%d",&option);
        switch (option)
        {
        case 1:
            ans = getadd(num1, num2);
            printf("the add is : %f", ans);
            break;
        
        }
      switch (option)
      {
      case 2:
        ans = getsub(num1, num2);
        printf("the sub is : %f", ans);
        break;
      
      }
      switch (option)
      {
      case 3:
        ans = getmul(num1,num2);
        printf("the mul is : %f",ans);
        break;
      
      }
      switch (option)
      {
      case 4:
        ans = getdiv(num1, num2);
        printf("the div is : %f", ans);
        break;
      
      }
      switch (option)
      {
      case 5:
        ans = getmodule(num1, num2);
        printf("the module is : %f", ans);
        break;
      
      }
      switch (option)
      {
      case 6:
        ans = max(num1, num2);
        printf("the max is : %f", ans);
        break;
      
      }
      switch (option)
      {
      case 7:
        ans = min(num1, num2);
        printf("the min is : %f", ans);
        break;
      
      }
      switch (option)
      {
      case 8:
        ans = eql(num1, num2);
        printf("the eql is : %f",ans);
        break;
      
      }
      printf("\n select any one \n 1 for contiune \n2 for exit");
      scanf("%d",&countiune);
      if (countiune<1&&countiune>2)
      {
        printf("invalid");
        break;
      }
      

      
    
      
    } while (countiune == 1);
    
}