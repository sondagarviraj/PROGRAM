#include<stdio.h>
void main()
{
    
   float heaight1,weight1,heaight2,weight2,office1,office2;
   printf("heaight1=");
   scanf("%f",&heaight1);
   printf("weight1=");
   scanf("%f",&weight1);
   printf("heaight2=");
   scanf("%f",&heaight2);
   printf("weight2=");
   scanf("%f",&weight2);
   office1=heaight1*weight1;
   office2=heaight2*weight2;
   if(office1<office2)
   {
      printf("office1 is small");
   }
   else
   {
      printf("office2 is samll");
   }
}
