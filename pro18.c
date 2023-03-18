#include<stdio.h>
void main()
{
    float plt1,plt2,dis,option;

    printf("\n plt1 in 1 mercury");
    printf("\n plt1 in 2 venus");
    printf("\n plt1 in 3 earth");
    printf("\n plt1 in 4 mars");
    printf("\n plt1 in 5 jupitar");
    printf("\n plt1 in 6 saturn");
    printf("\n plt1 in 7 uranus");
    printf("\n plt1 in 8 neptune");
    scanf("%d",&option);
    printf("\n plt2 in 1 mercury");
    printf("\n plt2 in 2 venus");
    printf("\n plt2 in 3 earth");
    printf("\n plt2 in 4 mars");
    printf("\n plt2 in 5 jupitar");
    printf("\n plt2 in 6 saturn");
    printf("\n plt2 in 7 uranus");
    printf("\n plt2 in 8 neptune");
    scanf("%d",&option);
    if(dis=1)
    {
        dis=57900000-(-108200000);
        printf("\n the mercury to venus %f",dis);
        dis=149000000-(-227900000);
        printf("\n the earth to mars %f",dis);
        dis=778600000-(-143350000);
        printf("\n the jupitar to saturn %f",dis);
        dis=2872500000-(-4495100000);
        printf("\n the uranus to neptune %f",dis);

        
    }


    
    
    
   

}